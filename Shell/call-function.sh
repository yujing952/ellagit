#!/bin/bash


function hello_world()
{
	echo "hello world function"
	echo $1 $2
	return 1
}


hello()
{
	echo "hello function"

}


hello 

hello_world  5 6 
echo $?

FUN=`hello_world 3 4`
echo $FUN
