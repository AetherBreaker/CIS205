// Jacob Ogden
// 2/1/2023
// Circle class header file

#pragma once

class Circle {
    public:
    const float PI = 3.14159;
    Circle *CircleAddress = this;
    float radius;

    Circle() {
        radius = 1.0;
    }
    Circle(double r) {
        radius = r;
    }
    Circle(Circle *cPtr) {
        radius = cPtr->radius;
    }

    float circumference() {
        return 2 * PI * radius;
    }
};