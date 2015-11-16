#!/bin/sh

# be sure your files named "mus${SUFFIX}"

if [ "$1" == "" ]; then
	echo "No args!"
	exit 1
fi

./build $1 && ./run $1