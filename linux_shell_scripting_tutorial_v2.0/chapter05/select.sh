#!/bin/bash
# Set PS3 prompt
PS3="Enter the space shuttle to get more information : "

# set shuttle list
select shuttle in columbia endeavour challenger discovery atlantis enterprise pathfinder
do
    echo "$shuttle selected"
done
