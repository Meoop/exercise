#!/bin/bash
match=$1    # filename
found=0     # set to 1 if file found in the for loop

# show usage
[ $# -eq 0 ] && { echo "Usage: $0 filename"; exit 1; }

# Try to find in /etc
for f in /etc/*
do
    if [ $f == "$match" ]
    then
        echo "$match file found!"
        found=1    # file found
        break
    fi
done

# noop file not found
[ $found -eq 0 ] && echo "$match file not found in /etc directory"

