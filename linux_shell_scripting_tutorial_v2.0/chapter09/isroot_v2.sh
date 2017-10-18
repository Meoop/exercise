#!/bin/bash
# version 2.0
# define constants
declare -r TRUE=0
declare -r FALSE=1

# Purpose: Determine if current user is root or not
is_root_user(){
    [ $(id -u) -eq 0 ] && return $TRUE || return $FALSE
}

# invoke the function
# make decision using coditional logical operators
is_root_user && echo "You can run this script." || echo "You need to run this script as a root user."

