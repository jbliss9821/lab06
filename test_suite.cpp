#include "test_suite.h"
#include "LinkedListOfInts.h"

test_suite::test_suite()
{
	std::cout <<"1";
}

void test_suite::run_tests()
{
	std::cout << "\nTest 1: ";//isempty on initial
	if(!test1())
	{
		std::cout << "Failed.  isEmpty returns false on initialization of list.\n";
	}
	else
	{
		std::cout << "Passed.  isEmpty returns true on initialization of list.\n";
	}

	std::cout << "\nTest 2: ";//isempty on size of 250
	if(!test2())
	{
		std::cout << "Failed.  isEmpty returns true on size >0 of list.\n";
	}
	else
	{
		std::cout << "Passed.  isEmpty returns false on size >0 of list.\n";
	}

	std::cout << "\nTest 3: ";//size 0 on initial
	if(!test3())
	{
		std::cout << "Failed.  size and toVector.size return not 0 on initialization of list.\n";
	}
	else
	{
		std::cout << "Passed.  size and toVector.size return 0 on initialization of list.\n";
	}

	std::cout <<"\nTest 4: ";//size 1 on one addfront
	if (!test4())
	{
		std::cout << "Failed.  size returns not 1 on one add front.\n";
	}
	else
	{
		std::cout << "Passed.  size returns 1 on one add front.\n";
	}

	std::cout <<"\nTest 5: ";//size 250 on add 250 front
	if (!test5())
	{
		std::cout << "Failed.  size returns incorrect on multiple add front.\n";
	}
	else
	{
		std::cout << "Passed.  size returns correct on multiple add front.\n";
	}

	int test_6_out = test6();
	std::cout << "\nTest 6: ";
	if(test_6_out == 49)//add 50 front remove 1 front check size
	{
		std::cout << "Passed. Addfront x 50, remove front 1.  Expected 49.  Got 49.\n";
	}
	else
	{
		std::cout << "Failed.  Addfront x 50, remove front 1.  Expected 49.  Got " << test_6_out << ".\n";
	}

	std::cout <<"\nTest 7: ";
	if (!test7())//size 1 on one addback
	{
		std::cout << "Failed.  size returns not 1 on one add back.\n";
	}
	else
	{
		std::cout << "Passed.  size returns 1 on one add back.\n";
	}

	std::cout <<"\nTest 8: ";//size 250 on add 250 back
	if (!test8())
	{
		std::cout << "Failed.  size returns incorrect on multiple add back.\n";
	}
	else
	{
		std::cout << "Passed.  size returns correct on multiple add back.\n";
	}

	int test_9_out = test9();
	std::cout << "\nTest 9: ";
	if(test_9_out == 49)//add 50 back remove 1 back check size
	{
		std::cout << "Passed. Addback x 50, remove back 1.  Expected 49.  Got 49.\n";
	}
	else
	{
		std::cout << "Failed.  Addback x 50, remove back 1.  Expected 49.  Got " << test_9_out << ".\n";
	}

	std::cout << "\nTest 10: ";//return value on remove front non-empty list
	if(test10())
	{
		std::cout << "Passed.  removeFront saw non-empty list as non-empty and returned true for removal.\n";
	}
	else
	{
		std::cout << "Failed.  removeFront saw non-empty list as empty and returned false for removal.\n";
	}

	std::cout << "\nTest 11: ";//return value on remove back non-empty list
	if(test11())
	{
		std::cout << "Passed.  removeBack saw non-empty list as non-empty and returned true for removal.\n";
	}
	else
	{
		std::cout << "Failed.  removeBack saw non-empty list as empty and returned false for removal.\n";
	}
}

//isempty on initial
bool test_suite::test1() 
{
	LinkedListOfInts list;
	
	bool test = list.isEmpty();

	if(test)
	{
		return true;
	}
	
	return false;
}

//isempty on addfront 250
bool test_suite::test2()
{
	LinkedListOfInts list;

	for (int i = 0; i < 250; i++)
	{
		list.addFront(10);
	}

	bool test = list.isEmpty();

	if(!test)
	{
		return true;
	}
	
	return false;
}

//size 0 on initial
bool test_suite::test3()
{
	LinkedListOfInts list;
	
	int test_size = list.size();
	int test_size_vec = list.toVector().size();

	if(test_size == 0 && test_size_vec == 0)
	{
		return true;
	}
	
	return false;
}

//size 1 on one add front
bool test_suite::test4()
{
	LinkedListOfInts list;
	list.addFront(10);
	
	int test_size = list.size();
	int test_size_vec = list.toVector().size();

	if(test_size == 1 && test_size_vec == 1)
	{
		return true;
	}
	
	return false;
}

//size 250 on 250 addfront
bool test_suite::test5()
{
	LinkedListOfInts list;
	for (int i = 0; i < 250; i++)
	{
		list.addFront(10);
	}
	
	int test_size = list.size();
	int test_size_vec = list.toVector().size();

	if(test_size == 250 && test_size_vec == 250)
	{
		return true;
	}
	
	return false;
}

//size on add 50 front remove 1 front
int test_suite::test6()
{
	LinkedListOfInts list;
	for (int i = 0; i < 50; i++)
	{
		list.addFront(10);
	}

	int test_size_vec = list.toVector().size();

	return test_size_vec;
}

//size 1 on one addback
bool test_suite::test7()
{
	LinkedListOfInts list;
	list.addBack(10);
	
	int test_size = list.size();
	int test_size_vec = list.toVector().size();

	if(test_size == 1 && test_size_vec == 1)
	{
		return true;
	}
	
	return false;
}

//size 250 on 250 addback
bool test_suite::test8()
{
	LinkedListOfInts list;
	for (int i = 0; i < 250; i++)
	{
		list.addBack(10);
	}
	
	int test_size = list.size();
	int test_size_vec = list.toVector().size();

	if(test_size == 250 && test_size_vec == 250)
	{
		return true;
	}
	
	return false;
}

//size on add 50 back remove 1 back
int test_suite::test9()
{
	LinkedListOfInts list;
	for (int i = 0; i < 50; i++)
	{
		list.addBack(10);
	}

	list.removeBack();
	
	int test_size_vec = list.toVector().size();

	return test_size_vec;
}

//return value on remove front non-empty list
bool test_suite::test10()
{
	LinkedListOfInts list;
	for (int i = 0; i < 50; i++)
	{
		list.addFront(10);
	}

	bool test = list.removeFront();
	
	return test;
}

//return value on remove back non-empty list
bool test_suite::test11()
{
	LinkedListOfInts list;
	for (int i = 0; i < 50; i++)
	{
		list.addFront(10);
	}

	bool test = list.removeBack();
	
	return test;
}