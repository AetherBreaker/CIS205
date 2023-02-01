// weak-ptrd.cpp
// In this example, a shared_ptr to an int is created and assigned the value of 5. 
// A weak_ptr is then created from the shared_ptr. The value of the int is accessed 
// using the lock() method of the weak_ptr, which returns a shared_ptr to the object. 
// This shared_ptr can then be dereferenced to access the value of the int. The output 
// of this program will be "5".
// weak_ptrs do not have ownership


#include <iostream>
#include <memory>

int main() {
  // Create a shared_ptr to an int
  // Creating a shared_ptr through make_shared
  std::shared_ptr<int> p1 = std::make_shared<int>();
  *p1 = 78;
  std::cout << "p1 = " << *p1 << std::endl;

  // Create a weak_ptr from the shared_ptr
  std::weak_ptr<int> weakInt = p1;

  // Access the value of the int using the weak_ptr
  std::cout << *weakInt.lock() << std::endl;

  return 0;
}
