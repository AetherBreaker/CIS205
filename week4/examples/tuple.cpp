//tuple1.cpp
//a simple example of a tuple.

#include <iostream>
#include <tuple>

int main() {
  std::tuple<int, char, double> t1 (1, 'a', 3.14);
  std::tuple<int, int, char, char> t2;
  
  t2 = std::make_tuple(1, 2,'a', 'b');
  
  std::cout << "Tuple t1 contains: " << std::get<0>(t1) << ", " << std::get<1>(t1) << ", " << std::get<2>(t1) << std::endl;
  
  std::cout << "Tuple t2 contains: " << std::get<0>(t2) << ", " << std::get<1>(t2) << ", " << std::get<2>(t2) << ", " << std::get<3>(t2) << std::endl;
  
  return 0;
}