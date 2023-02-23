// Multisets are STL Containers that sort themselves automatically...
// Multisets allow duplicates
#include<iostream>
#include<set>

using namespace std;

int main()
{

	// typedef C++ defines a synonym, or alias for the 
	// specified type-declaration. 

	typedef multiset<int,less<int> > IntSet;
//	typedef set<int,greater<int> > IntSet;

	IntSet collection;

	collection.insert(4);
	collection.insert(1);
	collection.insert(5);
	collection.insert(3);
	collection.insert(2);
	collection.insert(8);
	collection.insert(7);
	collection.insert(6);
	collection.insert(6);
	collection.insert(9);

	IntSet::iterator pos;

	for(pos = collection.begin(); pos != collection.end(); ++pos) {
		cout << *pos << ' ' ;
	}
	cout << endl;


    cin.get();
	return 0;
}
