// inline1.cpp
// simple example of demonstrating the difference of time 
// by changing a function to inline.

#include<iostream>
#include<ctime>

using namespace std;

void ShowVariable(int z) {
    cout << z << endl;
}

int main() {
    std::clock_t start = std::clock();          // store start time...


    for (int x = 1; x < 100000; x++)
        ShowVariable(x);


    clock_t end = std::clock();        // store end time   

    double elapsed = (end - start) / (double)CLOCKS_PER_SEC;   // from <ctime>
    double cycles = (end - start);                                                        // # cycles 

    cout << "Elapsed time: " << elapsed << " seconds" << endl;\
        cout << "# Cycles: " << cycles << endl;


    return 0;
}
