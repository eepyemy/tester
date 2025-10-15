filename=.test.c
last_added=$(grep "test_ex" $filename | tail -1)
last_added=${last_added##*ex}
last_added=${last_added%%\(*}
for_path=$last_added
last_added=${last_added#0}
last_added=$(($last_added))
i=$((0))

find $(git rev-parse --show-toplevel) -wholename "*/ex*/*.c" | while read line ; do
	if (($i <= $last_added));
	then
		i=$(($i+1))
		continue
	fi
	relpath=$(realpath --relative-to=$(pwd) $line)
	exdir=${line%/*}
	exdir=${exdir##*/}
	sed -i "/void\ttest_all(void)/ivoid\ttest_$exdir(void)\n{" $filename
	sed -i "/void\ttest_all(void)/i\ \tprintf(\"\\\nTesting $relpath ...\\\n\\\n\");" $filename
	sed -i "/void\ttest_all(void)/i\ \tprintf(\"\\\n\");\n}\n" $filename
done

last="ex$for_path"
#echo $last
find $(git rev-parse --show-toplevel) -wholename "*/ex*/*.c" | while read line ; do
	if (($i <= $last_added));
	then
		i=$(($i+1))
		continue
	fi
	relpath=$(realpath --relative-to=$(pwd) $line)
	exdir=${line%/*}
	exdir=${exdir##*/}
	sed -i "/^test_$last();$/atest_$exdir();" $filename
	last=$exdir
done

last="ex$for_path"
#echo $last
find $(git rev-parse --show-toplevel) -wholename "*/ex*/*.c" | while read line ; do
	if (($i <= $last_added));
	then
		i=$(($i+1))
		continue
	fi
	relpath=$(realpath --relative-to=$(pwd) $line)
	exdir=${line%/*}
	exdir=${exdir##*/}
	sed -i "/#include <stdio.h>/i#include \"$relpath\"" $filename
	last=$exdir
done

last="ex$for_path"
#echo $last
find $(git rev-parse --show-toplevel) -wholename "*/ex*/*.c" | while read line ; do
	if (($i <= $last_added));
	then
		i=$(($i+1))
		continue
	fi
	relpath=$(realpath --relative-to=$(pwd) $line)
	exdir=${line%/*}
	exdir=${exdir##*/}
	sed -i "/ test_$last();$/aif(i == $i) test_$exdir();" $filename
	last=$exdir
	i=$(($i+1))
done
