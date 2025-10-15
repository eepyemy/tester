#!/bin/bash

test_file_name=".test.c"
find $(git rev-parse --show-toplevel) -wholename "*/*/*.h" | while read line ; do
	relpath=$(realpath --relative-to=$(pwd) $line)
	echo "$relpath ADDED TO $test_file_name"
	echo "#include \"$relpath\"" >> $test_file_name
done
echo -e '#include <stdio.h>' >> $test_file_name
echo -e '#include <string.h>' >> $test_file_name
echo -e '#include <stdlib.h>\n' >> $test_file_name

find $(git rev-parse --show-toplevel) -wholename "*/ex*/*.c" | while read line ; do
	relpath=$(realpath --relative-to=$(pwd) $line)
	exdir=${line%/*}
	exdir=${exdir##*/}
	echo -e "void\ttest_$exdir(void)\n{" >> $test_file_name
	echo -en "\tprintf(\"" >> $test_file_name
	echo -n "\nTesting $relpath ...\n\n\");" >> $test_file_name
	echo -en "\n\tprintf(\"" >> $test_file_name
	echo -n "\n\");" >> $test_file_name
	echo -e "\n}\n" >> $test_file_name
done
echo -e "void\ttest_all(void)" >> $test_file_name
echo -e "{" >> $test_file_name
find $(git rev-parse --show-toplevel) -wholename "*/ex*/*.c" | while read line ; do
	relpath=$(realpath --relative-to=$(pwd) $line)
	exdir=${line%/*}
	exdir=${exdir##*/}
	echo -e "test_$exdir();" >> $test_file_name
done
echo -e "}\n" >> $test_file_name
echo -e "void\ttest_i(int i)" >> $test_file_name
echo -e "{" >> $test_file_name
k=$((0))
find $(git rev-parse --show-toplevel) -wholename "*/ex*/*.c" | while read line ; do
	relpath=$(realpath --relative-to=$(pwd) $line)
	exdir=${line%/*}
	exdir=${exdir##*/}
	echo -e "if(i == $k) test_$exdir();" >> $test_file_name
	k=$(($k+1))
done
echo -e "}\n" >> $test_file_name
echo -e "int\tmain(int argc, char *argv[])" >> $test_file_name
echo -en "{\n" >> $test_file_name
echo -e "\tint\t\ti;" >> $test_file_name
echo -e "\n\ti = 1;" >> $test_file_name
echo -e "\twhile(i <= argc - 1)" >> $test_file_name
echo -e "\t{\n\t\tint\t\targ;" >> $test_file_name
echo -e "\t\targ = atoi(argv[i]);\n\t\ttest_i(arg);\n\t\ti++;\n\t}" >> $test_file_name
echo -e "\tif(argc == 1)\n\t\ttest_all();" >> $test_file_name
echo -en "\tprintf(\"" >> $test_file_name
echo -n "\n\");" >> $test_file_name
echo -e "\n\treturn (0);" >> $test_file_name
echo -e "}" >> $test_file_name