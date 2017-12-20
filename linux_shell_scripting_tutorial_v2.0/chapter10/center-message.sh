#!/bin/bash
# Purpose: center-message.sh - Display centered text in the screen in reverse video
# ---------------------------------------------------------------------------------
# Find out current screen width and hight
_COLUMNS=$(tput cols)
_LINES=$(tput lines)

# Set default message if $1 input not provided
_MESSAGE="${1:-Linux Shell Scripting Tutorial v2.0}"

# Calculate x and y coordinates so that we can display $MESSAGE
# centered in the screen 
x=$(( $_LINES / 2 ))
y=$(( ( $_COLUMNS - ${#_MESSAGE} )  / 2 ))

# Clear the screen
tput clear

# set x and y position
tput cup $x $y

# set reverse video mode
tput rev

# Alright display message stored in $_MESSAGE
echo "${_MESSAGE}"

# Just wait for user input...
read -p "" readDamKey 

# Start cleaning up our screen...
tput clear
tput sgr0
tput rc
