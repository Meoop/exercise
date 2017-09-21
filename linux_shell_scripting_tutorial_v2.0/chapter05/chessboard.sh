#!/bin/bash
for (( i=1; i <=8; i++ ))
do
    for (( j=1; j <=8; j++ ))
    do
        total=$(( $i + $j ))
        tmp=$(( $total % 2 ))
        # Fine out odd and even nu,ber and change the color
        # alternating colors using odd and even number logic
        if [ $tmp -eq 0 ]
        then
            echo -e -n "\033[47m  "
        else
            echo -e -n "\033[40m  "
        fi
    done
    echo ""
done
