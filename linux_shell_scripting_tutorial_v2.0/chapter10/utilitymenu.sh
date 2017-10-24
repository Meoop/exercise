#!/bin/bash
# utilitymenu.sh - A sample shell script to display menus on screen
# Store menu options selected by the user
INPUT=/tmp/menu.sh.$$

# Storage file for displaying cal and date command output
OUTPUT=/tmp/output.sh.$$

# get text editor or fall back to vi_editor
vi_editor=${EDITOR-vi}

# trap and delete temp files
trap "rm $OUTPUT; rm $INPUT; exit" SIGHUP SIGINT SIGTREM

#
# Purpose - display output using msgbox
#   $1 -> set msgbox height
#   $2 -> set msgbox width
#   $3 -> set msgbox title
#
function display_output(){
    local h=${1-10}
    local w=${2-41}
    local t=${3-Output}
    dialog --backtitle "Linux shell script tutorial" --title "${t}" --clear --msgbox "$(<$OUTPUT)" ${h} ${w}
}

#
# Purpose - display current system date & time
#
function show_date(){
    echo "Today is $(date) @ $(hostname -f)." >$OUTPUT
    display_output 6 60 "Data and Time"
}

#
# Purpose - display a calendar
#
function show_calendar(){
    cal >$OUTPUT
    display_output 13 25 "Calendar"
}

#
# set infinite loop
#
while true
do
    ### display main menu ###
    dialog --clear --help-button --backtitle "Linux Shell Script Tutorial" \
        --title "[ M A I N - M E N U ]" \
        --menu "You can use the UP/DOWN arrow keys, the first \
        letter of the choice as a hot key, or the \
        number keys 1-9 to choose an option. \
        Choose the TASK" 15 50 4 \
        Date/time "Displays date and time" \
        Calendar "Displays a calendar" \
        Editor "Start a text editor" \
        Exit "Exit to the shell" 2>$INPUT
    menuitem=$(<${INPUT})

    # make decsion
    case $menuitem in
        Date/time) show_date ;;
        Calendar) show_calendar ;;
        Editor) $vi_editor ;;
        Exit) echo "Bey!"; break ;;
    esac
done

# if temp files found, delete 
[ -f $OUTPUT ] && rm $OUTPUT
[ -f $INPUT ] && rm $INPUT
