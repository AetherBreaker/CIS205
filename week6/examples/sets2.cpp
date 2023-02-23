// sets2.cpp
// 
#include<iostream>
#include<set>

using namespace std;

int main()
{

	// typedef C++ defines a synonym, or alias for the 
	// specified type-declaration. 

//	typedef set<int,less<int> > IntSet;
//	typedef set<int,greater<int> > IntSet;
//	IntSet; collection;
	
	set<int,less<int> > collection;
//	set<int,greater<int> > collection;	

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

	set<int>::iterator pos;
//	intSet::iterator pos;

	for(pos = collection.begin(); pos != collection.end(); ++pos) {
		cout << *pos << ' ' ;
	}
	cout << endl;

	return 0;
}
