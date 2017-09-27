#!/bin/bash
# Write a shell script that, given a file name as the argument will count English language articles such As 'A', 'An' and 'The'.
file=$1
a=0

if [ $# -eq 0 ]
then
    echo "Usage: $0 filename"
    exit 1
fi
if [ ! -f $file ]
then
    echo "$file is not a file."
    exit 2
fi

while read line
do
    l=$(echo $line | tr [:upper:] [:lower:])
    for word in $l
    do
        [[ "$word" == "a" || "$word" == "an" || "$word" == "the" ]] && ((a++))
    done
done < $file

echo "articles: $a"

