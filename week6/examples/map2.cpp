// map2.cpp 
// 

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, float> stocks;

	//StringFloatMap; stocks;

	stocks["GE"] = 63.52;
	stocks["CMS"] = 53.24;
	stocks["FORD"] = 14.13;
	stocks["TLSA"] = 202.00;

    map<string, float>::iterator iter;
    
//	StringFloatMap::iterator iter;

	// the iterator iter can iterate thru the string/float pairs.  

	for(iter = stocks.begin(); iter != stocks.end(); iter++)
	{
		cout << "stock: " << iter->first << "\t" << "price: " << iter->second << endl;

	}

	// Stocks Doubled!!

	cout << endl << "The Stocks Doubled..." << endl;

	for (iter = stocks.begin(); iter != stocks.end(); iter++)
	{
		iter->second *= 2;
	}

	for(iter = stocks.begin(); iter != stocks.end(); iter++)
	{
		cout << "stock: " << iter->first << "\t" << "price: " << iter->second << endl;

	}
	
	cout << endl;

	cout << "Add a New Stock by Copying GE to a new stock called GEHC" << endl;

	stocks["GEHC"] = stocks["GE"];

	for(iter = stocks.begin(); iter != stocks.end(); iter++)
	{
		cout << "stock: " << iter->first << "\t" << "price: " << iter->second << endl;

	}



	cout<< endl;
	
	return 0;
}

