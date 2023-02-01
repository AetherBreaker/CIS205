// unique_ptr2.cpp
// Demonstration simple usage of a unique_ptr 
// - transferring ownership to another unique_ptr
// - passing unique_ptr to a function, 

#include <memory>
#include <iostream>

class someObj
{
   public:
	int t;
	someObj(int x)
	{
		t = x;
		std::cout << "someObj created - t = " << t << std::endl;
	}

	~someObj()
	{
		std::cout << "someObj destroyed" << std::endl;
	}
};

bool Ownership(std::unique_ptr<someObj> & x )				// sample funciton to demonstrate
{														// passing a unique_ptr by reference.
	if(x)													// have to pass by reference
		return true;										// because you cannot make a copy
	else													// of a unique pointer
		return false;	
}

int main()
{

	std::unique_ptr<someObj> objPtr1(new someObj(32)); 	// Create a unique_ptr
														// object through raw pointer

	int t1 = objPtr1->t;                            						// example of accessing 
														// element t via unique_ptr
														
	if (Ownership(objPtr1))
			std::cout << "objPtr1 owns someObj(32)" << std::endl;
	else
			std::cout << "objPtr1 does not own someObj(32)" << std::endl;

	std::unique_ptr<someObj> objPtr2 = move(objPtr1);
	
	std::cout << "After move..." << std::endl;
 	
	if (Ownership(objPtr1))
		std::cout << "objPtr1 owns someObj(32)" << std::endl;
	else
		std::cout << "objPtr1 does not own someObj(32)" << std::endl;
	
	if (Ownership(objPtr2))
		std::cout << "objPtr2 owns someObj(32)" << std::endl;
	else
		std::cout << "objPtr2 does not own someObj(32)" << std::endl;


	
	std::cout << "t1 = " << t1 <<  std::endl;	
	return 0;
};

