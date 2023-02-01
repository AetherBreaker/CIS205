// shared_ptr2.cpp
// expanded example of shared poitner use.
//  - reference counts
// -  reset() -> releasing the pointer from the object
// -  determining ownership: Reference Count = 1

#include  <memory> 					// for shared_ptr
#include <iostream>
 
int main()
{
	// Creating a shared_ptr through make_shared
	std::shared_ptr<int> p1 = std::make_shared<int>();
	*p1 = 78;
	std::cout << "p1 = " << *p1 << std::endl;
 
	// Shows the reference count
	std::cout << "p1 Reference count = " << p1.use_count() << std::endl;
 
	// Second shared_ptr object will also point to same pointer internally
	// It will make the reference count to 2.
	std::shared_ptr<int> p2(p1);
 
	// Shows the reference count
	std::cout << "p2 Reference count = " << p2.use_count() << std::endl;
	std::cout << "p1 Reference count = " << p1.use_count() << std::endl;
 
	// Comparing smart pointers
	if (p1 == p2)
	{
		std::cout << "p1 and p2 are pointing to same pointer\n";
	}
	
	std::cout << "p1 Reference count = " << p1.use_count() << std::endl;
	std::cout << "p2 Reference count = " << p2.use_count() << std::endl;
	
	// release p2 from pointing to the object using reset...
	
	p2.reset();
	
	std::cout << "After p2 reset()..." << std::endl;
	
	std::cout << "p1 Reference count = " << p1.use_count() << std::endl;
	std::cout << "p2 Reference count = " << p2.use_count() << std::endl;
	
	
	if (p1.use_count() == 1) 
		std::cout << "The pointer p1 owns the object" << std::endl;
	
	if (p2.use_count() == 1) 
		std::cout << "The pointer p2 owns the object" << std::endl;
	
	
 
	std::cout<<"Reset p1 "<<std::endl;
 
	p1.reset();
 
	// Reset the shared_ptr, in this case it will not point to any Pointer internally
	// hence its reference count will become 0.
 
	std::cout << "p1 Reference Count = " << p1.use_count() << std::endl;
 
	// Reset the shared_ptr, in this case it will point to a new Pointer internally
	// hence its reference count will become 1.
 
	p1.reset(new int(11));
 
	std::cout << "p1  Reference Count = " << p1.use_count() << std::endl;
 
	// Assigning nullptr will de-attach the associated pointer and make it to point null
	p1 = nullptr;
 
	std::cout << "p1  Reference Count = " << p1.use_count() << std::endl;
 
	return 0;
}