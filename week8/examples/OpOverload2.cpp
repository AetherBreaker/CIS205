//OpOverload2.cpp

#include <iostream>

class Point {
    public:
    Point(int x = 0, int y = 0): x1(x), y1(y) {

        std::cout << "x = " << x1 << " - - - " << "y = " << y1 << std::endl;
    }

    // the + operator is overloaded below by defining a member function called operator+, 
    // which takes another Point object named “other” as a parameter and 
    // returns a new Point object that is the sum of the two objects.

    Point operator+(const Point &other) const {			// 
        return Point(x1 + other.x1, y1 + other.y1);
    }

    private:
    int x1;
    int y1;
};

using namespace std;

int main(int argc, char *argv[]) {

    cout << "Point p1:  ";
    Point p1(1, 2);
    cout << "Point p2:  ";
    Point p2(3, 4);
    cout << endl;
    cout << "Point p3 (p1 +p2):  ";
    Point p3 = p1 + p2;   // p3 is a new Point object with x=4 and y=6

}