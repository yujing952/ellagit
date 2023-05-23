#!/bin/bash

for VAR in 1 2 3
do
	if [ $VAR -eq 2 ]
	then
		break
	fi
	echo $VAR
done

