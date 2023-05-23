#!/bin/bash
echo "Hello world!,shell.sh"

read VAR
echo "VAR is $VAR"
expr $VAR - 5
test "Hello"="HelloWorld"
test $VAR -eq 10

test -d ./linux_shell
exec ./testing.txt
exit

