// constexpr1.cpp  
// an Example of using constexpr to calculate Factoirials.
// the fac2() function is constexpr, it can be evaluated at compile-time 
// when called with a constant expression. 

#include<iostream>
#include<ctime>

using namespace std;

constexpr double fac2(double b)
{
	if (b > 1)
		{
			return b*fac2(b-1);
		}
	else
		return 1;
	
	cout << "after return" << b << endl;		
	
}


int main()
{
	constexpr double x = 50;
	
	std::clock_t start = std::clock();          // store start time...
	
	constexpr double f = fac2(x);
	
	cout <<  x << " Factorial is: " << f << endl;
	
	clock_t end = std::clock();        // store end time   
	
	double elapsed  = (end - start) / (double)CLOCKS_PER_SEC;   // from <ctime>
	double cycles = (end - start);                                                        // # cycles 
	
	cout << "Elapsed time: " << elapsed << " seconds" << endl;\
	cout << "# Cycles: " << cycles << endl;
 
	cin.get();
	return 0;
}

