#!/bin/bash
# A shell script to verity user password database
file="/etc/passwd /etc/group /etc/shadow /etc/gshdow"
for f in $file
do
    [ -f $f ] && echo "$f file found" || echo "*** Error  - $f file missing."
done
