#!/bin/sh
ifconfig | awk '/ether/ {print $2 "  " $3 " " $4 "  " $5}'