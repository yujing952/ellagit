#!/bin/bash

read NAME

case $NAME in
	"Linux")
		echo "Linux"
		;;
	"Cdeveloper")
		echo "Cdeveloper"
		;;
	*)
		echo "other"
		;;
esac
