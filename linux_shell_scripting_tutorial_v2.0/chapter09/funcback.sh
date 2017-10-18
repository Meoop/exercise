#!/bin/bash
# funcback.sh: Use $FUNCNAME
backup(){
    local d="$1"
    [[ -z $d ]] && { echo "${FUNCNAME}(): directory name not specified"; exit 1; }
    echo "Starting backup..."
}

backup $1
