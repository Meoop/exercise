#!/bin/bash
# Write a shell program to read two numbers and display all the odd numbers between those two numbers
echo -n "Enter first number : "
read n1
 
echo -n "Enter second number : "
read n2
 
if [ $n2 -gt $n1 ];
then
    for(( i=$n1; i<=$n2; i++ ))
    do
        # see if it is odd or even number
        test=$(( $i % 2 ))
        if [ $test -ne 0 ];
        then
            echo $i
        fi
    done
else
    echo "$n2 must be greater than $n1, try again..."
fi
