#!/bin/bash
create_jail(){
    d=$1
    echo "create_jail(): d is set to $d"
}

d=/apache.jail

echo "Before calling create_jail d is set to $d"

create_jail "/home/apache/jail"

echo "After calling create_jaiil d is set to $d"
