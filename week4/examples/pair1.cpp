//pair1.cpp  a pair example

#include <iostream>
#include <utility>

int main() {
  std::pair<int, char> p;
  p = std::make_pair(1, 'a');
  
  std::cout << "Pair contains: " << p.first << " and " << p.second << std::endl;
  return 0;
}