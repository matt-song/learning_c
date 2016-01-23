#!/bin/bash

DATE_NOW=`date +%F`
FOLDER="/home/matt/learning_c"
cd $FOLDER

git add *
git commit -m "Updated at $DATE_NOW"
git push -u origin master
