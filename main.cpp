/**
*	@author 
*	@date 
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "test_suite.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	//LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	test_suite myTester;
	
	std::cout << "Running...\nAnd we're done.\n";
	
	myTester.run_tests();

	std::cout << "\nGoodbye.\n";
	
	return (0);

}

