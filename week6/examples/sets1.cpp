// sets1.cpp 
// An example of sets...
// Sets are STL Containers that sort themselves automatically...
// Sets do not allow duplicates
#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int>  collection;

	collection.insert(4);
	collection.insert(1);
	collection.insert(5);
	collection.insert(3);
	collection.insert(2);
	collection.insert(8);
	collection.insert(7);
	collection.insert(6);
	collection.insert(6);	//duplicate, ignored
	collection.insert(9);

	set<int>::iterator pos;

	for(pos = collection.begin(); pos != collection.end(); ++pos) {
		cout << *pos << ' ' ;
	}
	cout << endl;

	return 0;
}
