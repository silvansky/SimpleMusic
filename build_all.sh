#!/bin/sh

CC=gcc
OPTS=

for i in *.c; do
	FILE=${i%.*}
	echo "$i -> $FILE"
	$CC $OPTS -o $FILE $i
done;