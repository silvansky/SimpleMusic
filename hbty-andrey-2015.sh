#!/bin/sh

# mus8.wav - drone
./build 8
./rec 8 30

# mus9.wav - one note at D (or not)
./build 9
./rec 9 0.7

mv mus8.wav drone.wav
mv mus9.wav d.wav

function gen_note {
	NOTE=$1
	SEMITONES=$2
	CENTS=$(expr $SEMITONES \* 100)
	sox d.wav "${NOTE}.wav" pitch $CENTS
}

gen_note e 2
gen_note fs 4
gen_note g 5
gen_note a 7
gen_note d1 12
gen_note h 9
gen_note c 10

ALL_NOTES=(d d e d d g fs d d d e d d a g d d d d1 h g fs e d c c h g a g g g g g)

NOTES_ARGS=""

for n in ${ALL_NOTES[@]}; do
	NOTES_ARGS="${NOTES_ARGS} ${n}.wav"
done

sox ${NOTES_ARGS} melody.wav pad 6 2 vol 2 echo 0.99 0.99 1000 0.5
sox -m drone.wav melody.wav hbty-andrey.mp3 pad 0 2 reverb

play hbty-andrey.mp3
