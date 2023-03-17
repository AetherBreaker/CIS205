#include <iostream>
#include <ctime>

using namespace std;

 int square(int n) {
    return n * n;
}

int main() {
    std::clock_t start = std::clock();          // store start time...
    int size = 5;
   int lookup[5] = {square(0), square(1), square(2), square(3), square(4)};
    for (int i = 0; i < size; i++) {
        std::cout << "square(" << i << ") = " << lookup[i] << std::endl;
    }
    clock_t end = std::clock();        // store end time   
    
    double elapsed  = (end - start) / (double)CLOCKS_PER_SEC;   // from <ctime>
    double cycles = (end - start);                                                        // # cycles 
    
    cout << "Elapsed time: " << elapsed << " seconds" << endl;\
    cout << "# Cycles: " << cycles << endl;
    return 0;
}
