#!/bin/bash

echo "Compilation du projet"
gcc -c fonctions.c -o fonctions.o
gcc -c main.c -o main.o
gcc fonctions.o main.o -o projet
rm -f *.o
