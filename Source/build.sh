#!/bin/bash
if [[ $# != "1" ]];then
	echo "Usage: sh "$0 "build/clean"
	exit 0
fi

if [[ $1 == "build" ]];then
	echo "Building ..."
	for i in `ls | grep -v $0`
	do 
		gmake -C $i
	done
elif [[ $1 == "clean" ]] ;then
 	for i in `ls | grep -v $0`
	do
		gmake clean -C $i
	done
else
	exit 0
fi

