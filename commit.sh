#!/bin/sh
git add *
git commit -m \""$1"\"
git push -u cafe master
echo "$1" 
