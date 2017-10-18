#!/bin/bash
# Load the mylib.sh using source command
source mylib.sh

echo "JAIL_ROOT is set to $JAIL_ROOT"

# invoke the is_root() and show message to user
is_root && echo "You are logged in as root." || echo "You are not logged in as root."
