#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
chmod a+x liball.a
