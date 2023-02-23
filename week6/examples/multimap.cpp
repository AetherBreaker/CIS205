//multimap.cpp

#include <iostream>
#include <map>

int main() 
{
    // Using a map
    std::map<int, std::string> Map1;
    Map1.insert({1, "one"});
    Map1.insert({2, "two"});
    Map1.insert({3, "three"});
    Map1.insert({1, "uno"}); // This will replace the value for key 1
    
    std::map<int, std::string>::iterator iter1;
    
    for(iter1 = Map1.begin(); iter1 != Map1.end(); iter1++)
        {
            std::cout << "Number: " << iter1->first << "\t" << "String: " << iter1->second << std::endl;
        }
    
    std::cout << std::endl;
    
    // Using a multimap
    std::multimap<int, std::string> MultiMap2;
    MultiMap2.insert({1, "one"});
    MultiMap2.insert({2, "two"});
    MultiMap2.insert({2, "three"});
    
    std::multimap<int, std::string>::iterator iter2;
    
    for(iter1 = MultiMap2.begin(); iter1 != MultiMap2.end(); iter1++)
        {
            std::cout << "Number: " << iter1->first << "\t" << "String: " << iter1->second << std::endl;
        }
    
    return 0;
}
    