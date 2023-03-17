// scientfic.cpp 
// use of scientific, fixed, and setprecision manipulators.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x = 31415967.35986374632;
    
    cout << "x in fixed format: " << fixed << x << endl;
    cout << "x in scientific format: " << scientific << x << endl << endl;
    
    for(int i = 0; i < 10; i++)
    {
        
        cout << "Precision: " << i << '\t' << setprecision(i) << "  fixed: " << x;
        cout << ",    scientific: " << scientific << x << endl;
    }

    return 0;
}
