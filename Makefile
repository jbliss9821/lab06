#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o test_suite.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o test_suite.o -o prog

main.o: main.cpp test_suite.h
	g++ -g -Wall -std=c++11 -c main.cpp

test_suite.o: test_suite.h test_suite.h
	g++ -g -Wall -std=c++11 -c test_suite.cpp
#Add needed Test.o recipe and compiler command


#DON'T delete LinkedList.o!
clean:
	rm main.o test_suite.o *.*~ prog
