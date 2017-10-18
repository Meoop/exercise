#!/bin/bash
# Variables
domain="CyberCiti.BIz"
out=""

##############################################
# Purpose: Converts a string to lower case
# Arguments:
#   $@ -> String to convert to lower case
##############################################
function to_lower(){
    local str="$@"
    local output
    output=$(tr '[A-Z]' '[a-z]' <<<"${str}")
    echo $output
}

# invoke the to_lower()
to_lower "This Is a TEST"

# invoke to_lower() and store its result to $out variable
out=$(to_lower ${domain})

# Display back the result form $out
echo "Demain name: $out"
