#!/bin/bash
cd $(git rev-parse --show-toplevel)
ROOT=$(git rev-parse --show-toplevel)
cd .tests
TEST_DIR=$(pwd)
cd $ROOT

GREEN="\033[38;5;118m"
LORANGE="\033[38;5;216m"
LGREEN="\033[38;5;115m"
LPINK="\033[38;5;225m"
YELLOW="\033[38;5;220m"
RED="\033[38;5;197m"
BLUE="\033[38;5;45m"
PURPLE="\033[38;5;63m"
PINK="\033[38;5;207m"
BLACK="\033[38;5;0m"
BG_GREEN="\033[48;5;82m"
BG_RED="\033[48;5;197m"
GREY="\033[38;5;8m"
BOLD="\033[1m"
DEFAULT="\033[0m"
CHECKMARK="\xE2\x9C\x93"
config=.config.h

short=0
verbose=0
format=" %02x"
norm=1

while getopts 'nsvf:' OPTION; do
	case "$OPTION" in
		s)
			#echo "SHORT EXEC"
			short=1
			;;
		v)
			#echo "VERBOSE EXEC"
			verbose=1
			;;
		f)
			format="$OPTARG"
			;;
		n)
			norm=0
			;;
		?)
			printf "script usage: $(basename \\$0) \n\t[-s] Short test exec, minimal info \
			\n\t[-v] Verbose exec, all function returns are shown \
			\n\t[-n] No norm \
			\n\t[-f format] Format for the memory output. \n\t\tExample: ./test.sh -f \"|%c\"\n" >&2
			exit 1
			;;
  esac
done



shift "$(($OPTIND -1))"

cd $TEST_DIR
sed -i "s/#define SHORT ./#define SHORT $short/g" $config
sed -i "s/#define VERBOSE ./#define VERBOSE $verbose/g" $config
sed -i "s/#define MEM_VIEW_MODE \".*\"/#define MEM_VIEW_MODE \"$format\"/g" $config

if make .testp > /dev/null ; then
	if [ $norm = 1 ]; then
		printf "$BLUE"
		curdir=$(pwd)
		cd $ROOT
		norminette || true
		sleep 0.5
		cd $curdir
	fi
	printf "$DEFAULT"
	printf "$YELLOW"
	echo "Running tests"
	printf "$DEFAULT"
	./.testp "$@"
	make clean > /dev/null
fi