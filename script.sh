set ff=unix
#!bin/bash

#this is to compile my files
g++ -c -Wall -gstabs main.cpp
g++ -Wall -gstabs main.o -o main


#print out the results
./main

#delete the object files
rm *.o

