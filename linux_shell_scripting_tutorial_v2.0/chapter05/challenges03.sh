#!/bin/bash
# Write a shell script that, given a file name as the argument will count vowels, blank spaces, characters, number of line and symbols.
file=$1
v=0

if [ $# -eq 0 ]
then
    echo "Usage: $0 filename"
    exit 1
fi

if [ ! -f $file ]
then
    echo "$file not a file"
    exit 2
fi

while read -n 1 c
do
    l=$(echo $c | tr [:upper:] [:lower:])
    [[ "$l" == "a" || "$l" == "e" || "$l" == "i" || "$l" == "o" || "$l" == "u" ]] && (( v++ ))
done < $file

echo "Vowels: $v"
echo "Charachters: $(cat $file | wc -c)"
echo "Blank lines: $(grep -c '^$' $file)"
echo "Lines: $(cat $file|wc -l)"

