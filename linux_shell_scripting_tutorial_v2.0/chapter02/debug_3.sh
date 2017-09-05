#!/bin/bash
set -n # Only read command but do not execute them
set -o noexec
echo "This is a test"
# no file is created as bash will only read commands but not exectus them
>/tmp/debug.txt
