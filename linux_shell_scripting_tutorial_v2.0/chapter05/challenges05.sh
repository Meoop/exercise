#!/bin/bash
# Write a shell script that, given a file name as the argument will write the even numbered line to a file with name evenfile and odd numbered lines in a text file called oddfile.
file=$1
count=0

if [ $# -eq 0 ]
then
    echo "Usage: $0 filename"
    exit 1
fi
if [ ! -f $file ]
then
    echo "$file is not a file"
    exit 2
fi

while read line
do
    ((count++))
    evenNo=$(( count%2 ))
    if [ $evenNo -eq 0 ]
    then
        echo $line >> evenfile
    else
        echo $line >> oddfile
    fi
done < $file

