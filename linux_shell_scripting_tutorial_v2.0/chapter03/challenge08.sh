#!/bin/bash
read -p "Enter any file name: " filename

if [ -f "${filename}" ]
then
    cp -v "$filename" /tmp
else
    echo "$0: $filename not found."
fi

