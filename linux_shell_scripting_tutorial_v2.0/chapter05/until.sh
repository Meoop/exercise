#!/bin/bash
i=1
until [ $i -gt 6 ]
do
    echo "Welcome $i times."
    i=$(( i+1 ))
done
