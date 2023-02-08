//Singleton3.cpp
//a (very) simple example of a Singleton random number generator

#include <iostream>

class Random {
    public:
    Random(Random &) = delete;    //copy constructor
    static Random &Get() {
        static Random s_Instance;		// in static memory
        return s_Instance;			// s_Instance referenced after the first time
    }
    float Float() {
        return randomFloat;
    }


    private:
    Random() {
        std::cout << "Random Instantiated..." << std::endl;
    }

    float randomFloat = 1.555;

    static Random s_Instance;
};

int main() {
    float num = Random::Get().Float();

    std::cout << num << std::endl;

    //Singleton Another = Singleton::Get();
    return 0;
}