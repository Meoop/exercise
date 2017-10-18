#!/bin/bash

JAIL_ROOT=/www/httpd
is_root(){
    [ $(id -u) -eq 0 ] && return $TRUE || return $FALSE
}
