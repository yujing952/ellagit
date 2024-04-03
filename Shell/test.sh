#!/bin/bash

echo "please input a var: "

read VAR
echo "VAR is $VAR"

expr $VAR - 5

echo "testing a string: "
test "Hello"="HelloWorld"

test $VAR -eq 10

exec ./othershell.sh

