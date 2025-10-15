#!/bin/bash

test_file_name=".test.c"
header="libft.h"
rm -f $test_file_name
find $(git rev-parse --show-toplevel) -wholename "*/*.h" | while read line ; do
	relpath=$(realpath --relative-to=$(pwd) $line)
	echo "$relpath ADDED TO $test_file_name"
	echo "#include \"$relpath\"" >> $test_file_name
done
echo -e '#include <stdio.h>' >> $test_file_name
echo -e '#include <bsd/string.h>' >> $test_file_name
echo -e '#include <stdlib.h>' >> $test_file_name
echo -e '#include <ctype.h>\n' >> $test_file_name
echo -e '#define PINK "\\033[38;5;207m"' >> $test_file_name
echo -e '#define DEFAULT "\\033[0m"' >> $test_file_name
echo -e '#define header_message(x) printf(PINK "\\n\\n[%s]" DEFAULT, x)' >> $test_file_name
echo -e '#define TEST(func) header_message(#func); func' >> $test_file_name
# gen empty test functions for each function in .h files
find $(git rev-parse --show-toplevel) -wholename "*/*.h" | while read line ; do
	i=$((0));
	cat $line | while read func; do 
		i=$(($i + 1)); 
		if (($i < 13));
		then 
			continue 
		fi; 
		if [[ $func == "" ]];
		then
			continue
		fi;
		func=${func%\(*}
		func=${func##*ft_}
		if [[ $func = *" "* ]]; then
			continue
		fi;
		#echo $func
		echo -e "void\ttest_ft_$func(void)\n{" >> $test_file_name
		echo -e "\n}\n" >> $test_file_name
	done
done

# gen test_all
echo -e "void\ttest_all(void)" >> $test_file_name
echo -e "{" >> $test_file_name
find $(git rev-parse --show-toplevel) -wholename "*/*.h" | while read line ; do
	i=$((0));
	cat $line | while read func; do 
		i=$(($i + 1)); 
		if (($i < 13));
		then 
			continue 
		fi; 
		if [[ $func == "" ]];
		then
			continue
		fi;
		func=${func%\(*}
		func=${func##*ft_}
		if [[ $func = *" "* ]]; then
			continue
		fi;
		echo -e "TEST(test_ft_$func());" >> $test_file_name
	done
done

echo -e "}\n" >> $test_file_name
echo -e "void\ttest_func(const char* func_name)" >> $test_file_name
echo -e "{" >> $test_file_name

k=$((0))
find $(git rev-parse --show-toplevel) -wholename "*/*.h" | while read line ; do
	i=$((0));
	cat $line | while read func; do 
		i=$(($i + 1)); 
		if (($i < 13));
		then 
			continue 
		fi; 
		if [[ $func == "" ]];
		then
			continue
		fi;
		func=${func%\(*}
		func=${func##*ft_}
		if [[ $func = *" "* ]]; then
			continue
		fi;
		echo -e "if(!strcmp(func_name, \"ft_$func\")) TEST(test_ft_$func());" >> $test_file_name
		k=$(($k+1))
	done
done

echo -e "}\n" >> $test_file_name
echo -e "int\tmain(int argc, char *argv[])" >> $test_file_name
echo -en "{\n" >> $test_file_name
echo -e "\tint\t\ti;" >> $test_file_name
echo -e "\n\ti = 1;" >> $test_file_name
echo -e "\twhile(i <= argc - 1)" >> $test_file_name
echo -e "\t{\n" >> $test_file_name
echo -e "\t\ttest_func(argv[i]);\n\t\ti++;\n\t}" >> $test_file_name
echo -e "\tif(argc == 1)\n\t\ttest_all();" >> $test_file_name
echo -en "\tprintf(\"" >> $test_file_name
echo -n "\n\");" >> $test_file_name
echo -e "\n\treturn (0);" >> $test_file_name
echo -e "}" >> $test_file_name
