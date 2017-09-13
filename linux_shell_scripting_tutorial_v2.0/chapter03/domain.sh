#!/bin/bash
read -p "Enter the Internet domain name (e.g. nixcraft.com) : " domain_name
whois $domain_name
