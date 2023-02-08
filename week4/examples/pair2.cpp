// pair2.cpp
// an example of creating and displaying a list of pairs...

#include <iostream>
#include <list>
#include <utility>

int main() {
  
  std::pair<int, char> p;                                             // instantiate the pair type
  
  std::list<std::pair<int, char>> pairs;                        // instantiate the list of pairs
  std::list<std::pair<int, char>>::iterator iter;             // instantiate the pairs iterator
  
  for (int x = 0; x < 100; x++)         // build the list
    {
      p = std::make_pair(x, 'a');
      pairs.push_back(p);
    }
  
  for (iter = pairs.begin(); iter != pairs.end(); iter++)
    {
      std::cout << p.first << "  - " << p.second << std::endl;
      //std::cout << iter->first << "  - " << iter->second << std::endl;
    }
  
  return 0;
}