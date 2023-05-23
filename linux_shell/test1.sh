#!/bin/bash

echo "1. Display list of all users currently logged in"
echo "2. Get help on a particular command"
echo "Press <Ctrl+D> to exit"

read NUM
case $NUM in
	"1")
		whoami
	;;
	"2")
		echo "Enter a command name:"
		read COM
		if test -z "${COM}"
			then exit
		else
			exec $COM
		fi
	;;
	*)
		echo "invalid information"
		exit
esac


