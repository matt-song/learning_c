#!/bin/bash

FOLDER="~/c_code/"
cd $FOLDER

git add *
git commit -m "message"
git push -u origin master
