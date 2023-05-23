#!/bin/bash

CITY=Shanghai

export NAME=C++developer

readonly AGE=40

echo $CITY
echo $NAME
echo $AGE

echo "unset CITY"
unset CITY
echo $CITY
