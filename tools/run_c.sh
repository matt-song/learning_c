#!/bin/bash

FILE=$1
mkdir -p "./.bin";

if [ -f $FILE ]; then
    gcc $FILE -o "./.bin/${FILE}.bin";
    chmod 755 "./.bin/${FILE}.bin";
    ./.bin/${FILE}.bin
else
    echo "no such file [$FILE]"
fi
