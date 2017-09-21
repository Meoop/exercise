#!/bin/bash
file=/etc/passwd
# set field delimiter to:
# read all 7 fields into 7 vars
while IFS=: read -r user enpass uid gid desc home shell
do
    # only display if UID >= 200
    [ $uid -ge 500 ] && echo "User $user ($uid) assigned \"$home\" home directory with $shell shell."
done < "$file"
