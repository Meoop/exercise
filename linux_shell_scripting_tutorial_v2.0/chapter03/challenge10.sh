#!/bin/bash
PEN="/tmp/usb"
read -p "Enter three file name: " f1 f2 f3

# Make sure pen drive exits else die
[ ! -d "$PEN" ] && { echo "$0: USB pen drive not found at $PEN"; exit 1;}

# Make sure pen drive is mounted else die
if grep -wq "$PEN" /etc/mtab
then
    # Make copy only if file exists, else display an error
    [ -f "$f1" ] && cp -v "$f1" $PEN || echo "$0: $f1 not found."
	[ -f "$f2" ] && cp -v "$f2" $PEN || echo "$0: $f2 not found."
	[ -f "$f3" ] && cp -v "$f3" $PEN || echo "$0: $f3 not found."
else
	echo "$0: USB pen is not mounted at $PEN."
fi

