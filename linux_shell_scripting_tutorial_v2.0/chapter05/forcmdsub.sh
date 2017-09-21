#!/bin/bash
echo "Printing file names in /tmp directory: "
for f in $(ls /tmp/*)
do
    echo $f
done
