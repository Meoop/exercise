#!/bin/bash
# version 1.0

# Purpose: Determine if current user is root or not
is_root_user(){
    [ $(id -u) -eq 0 ]
}

# invoke the function
# make decision using coditional logical operators
is_root_user && echo "You can run this script." || echo "You need to run this script as a root user."

