#!/bin/bash

echo "running norminette..."
current=$(pwd)
cd $(git rev-parse --show-toplevel)
norminette -R CheckForbiddenSourceHeader
cd $current

echo ""
echo "looking for test file..."
if [ -e .test.c ]
then
	echo ".test.c file exists!"
	bash $(git rev-parse --show-toplevel)/.utils/insert_new.sh
else
    echo ".test.c doesnt exist, generating..."
	bash $(git rev-parse --show-toplevel)/.utils/gen_test.sh
fi


echo ""
echo "compiling the .test.c file..."
if cc -Wall -Wextra -Werror .test.c ; then
	echo "Output:"
	./a.out $@
	echo ""
	bash $(git rev-parse --show-toplevel)/.utils/clean_a.sh
else
    bash $(git rev-parse --show-toplevel)/.utils/clean_a.sh
fi


