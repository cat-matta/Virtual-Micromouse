set ff=unix
#!bin/bash

#this is to compile my files
g++ -c -Wall -gstabs main.cpp
g++ -Wall -gstabs main.o -o main

#output the result of the program in plain text then copy that over to a text file named result.txt
#echo "$(./exam)" | cat > result.txt

#print out the results
./main

#delete the object files
rm *.o

