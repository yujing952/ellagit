#!/bin/bash


function hello_world()
{
    echo "hello world fun"
    echo $1 $2
    return 1
}

hello()
{
    echo "hello fun"
}

hello
hello_world  3 4
echo $?

FUN=`hello_world 1 2`
echo $FUN
