#!/bin/bash
a=$1
b=$3
op=$2
ans=0

# display usage
# run command one after the other using ; chracter
[ $# -eq 0 ] && { echo -e "Usage: $0 num1 op num2\n\t $0 1 + 5"; exit 1; }

case $op in
    +)
        ans=$(( a+b ))
        ;;
    -)
        ans=$(( a-b ))
        ;;
    /)
        ans=$(( a/b ))
        ;;
    \*|x)
        ans=$(( a*b ))
        ;;
    *)
        echo "Unknown operator."
        exit 2
        ;;
esac
echo "$a $op $b = $ans"


