#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int x = 1;
    int y = 59;
    int z = 1234;
    
    cout << setw(10) << internal << x << endl;
    cout << setw(10) << internal << y << endl;
    cout << setw(10) << internal << z << endl;
    
    cout << internal << setw(10) << x << endl;
    cout << internal << setw(10) << y << endl;
    cout << internal << setw(10) << z << endl;
    
    return 0;
}
