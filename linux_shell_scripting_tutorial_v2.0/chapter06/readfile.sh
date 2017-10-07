#!/bin/bash
# Shell script utility to read a file line line.
FILE="$1"

# make sure filename supplied at a shell prompt else die
[ $# -eq 0 ] && { echo "Usage: $0 filename"; exit 1; } 

# make sure file exist else die
[ ! -f $FILE ] && { echo "Error - File $FILE does not exists." ; exit 2; }

# make sure file readonly else die
[ ! -r $FILE ] && { echo "Error - Can not read $FILE file."; exit 3; }

IFS=$(echo -en "\n\b")

exec 3<$FILE
while read -u 3 -r line
do
	echo $line
done

# Close fd # 3
exec 3<&-

# exit with 0 success status 
exit 0
