// unique_ptr1.cpp

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

int main()
{

	std::unique_ptr<someObj> objPtr1(new someObj(32)); // Create a unique_ptr
														// object through raw pointer

	int t1 = objPtr1->t;                            	// Access the element
														// through unique_ptr
	std::cout << "t1 = " << t1 <<  std::endl;	
	return 0;
}
