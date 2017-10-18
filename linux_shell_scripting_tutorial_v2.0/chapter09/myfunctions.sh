#!/bin/bash
# Variables
declare -r TRUE=0
declare -r FALSE=1
declare -r PASSWD_FILE=/etc/passwd

############################################
# Purpose: Converts a string to lower case
# Arguments:
#   $@ -> String to convert to lower case
############################################
function to_lower(){
    local str="$@"
    local output
    output=$(tr '[A-Z]' '[a-z]' <<<"${str}")
    echo $output
}

############################################
# Purpose: Display an error message and die
# Arguments:
#   $1 -> Message
#   $2 -> Exit status (optional)
############################################
function die(){
    local message="$1"
    local exitCode=$2
    echo "$message"
    [ "$exitCode" == "" ] && exit 1 || exit $exitCode
}

############################################
# Purpose: Determine if current user is root or not
# Arguments: none
# Return: True or False
############################################
function is_root(){
    [ $(id -u) -eq 0 ] && return $TRUE || return $FALSE
}

######################################################
# Purpose: Return true $user exits in /etc/passwd
# Arguments: 
#   $1 (username) -> Username to check in /etc/passwd
# Return: True or False
######################################################
function is_user_exits(){
    local u=$1
    grep -qEw "^$u" $PASSWD_FILE && return $TRUE || return $FALSE
}

