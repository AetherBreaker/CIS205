// map1.cpp 
// a simple example of instantiating and displaying a map.

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{	map<int, string> err;
	
	err[1] = "Access Error";
	err[2] = "Read Error";
	err[3] = "Write Error";
	err[4] = "Corrupt File";
	err[5] = "Unknown Error";
	err[5] = "Another Unknown Error";

	
		map<int,string>::iterator iter;
    
//	StringFloatMap::iterator iter;

	// the iterator iter can iterate thru the string/float pairs.  

	for(iter = err.begin(); iter != err.end(); iter++)
	{
		cout << "Error Code: " << iter->first << "\t" << "Desc: " << iter->second << endl;
	}
	cout<< endl;
	return 0;
}

