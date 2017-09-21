#!/bin/bash
# A simple shell script to display a file on screen passed as command line argument
[ $# -eq 0 ] && { echo "Usage: $0 file1 file2 fileN"; exit 1; }

# read all command line arguments via the for loop
for f in $*
do
    echo "< $f >"
    [ -f $f ] && cat $f || echo "$f not a file."
    echo "---------------------------------------------------"
done
