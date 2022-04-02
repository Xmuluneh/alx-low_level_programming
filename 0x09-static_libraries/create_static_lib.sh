#!/bin/bash
gcc -c *.c &
Wait $!
ar -rc liball.a *.o &
Wait $!
ranlib liball.a &




