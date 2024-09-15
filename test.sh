#!/bin/bash

for((i=0;;i++))
do
	echo $i > seed
	./generator < seed > test.in
	./brut < test.in > brut.out 
	./wzor < test.in > wzor.out
	if diff -b brut.out wzor.out > /dev/null
	then
		echo "OK $i"
	else
		echo "NIE OK $i"
		break
	fi
done
