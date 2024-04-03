#!/bin/bash

m=1
m=$[ m + 1 ]
echo $m

m=`expr $m + 1`
echo $m

let m=m+1
echo $m

m=$(( m + 1 ))
echo $m

