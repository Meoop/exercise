#!/bin/bash
# Shell script to find out odd or even number provided by the user
# ----
# set variables to an integer attribute
declare -i times=0
declare -i n=0

# caputure CTRL+C CTRL+Z and quit singles using the trap
trap 'echo " disabled"' SIGINT SIGQUIT SIGTSTP

# set an infinite while loop
# user need to enter -9999 to exit the loop
while true
do
    # get date
    read -p "Enter number (-9999 to exit): " n
    # if it is -9999 die
    [ $n -eq -9999 ] && { echo "Bey!"; break; }
    # find out if $n is odd or even
    ans=$(( $n%2 ))
    # display result
    [ $ans -eq 0 ] && echo "$n is an even number." || echo "$n is  an odd number."
    # increase counter by 1
    times=$(( ++times ))
done

# reset all traps
trap - SIGINT SIGQUIT SIGTSTP

# dislpay counter
echo "You played $times times."
exit 0
