// Jacob Ogden
// 2/1/2023
// Header file for Unique project
#pragma once

class Foo {
    private:
    int x;
    public:
    Foo(int x): x(x) {}

    int getX() {
        return x;
    }

    void setX(int x) {
        this->x = x;
    }
};