#include <iostream>

class Singleton {
    public:
    Singleton(Singleton &) = delete;
    static Singleton &Get()	// returns an instance of Singleton
    {
        return s_Instance;
    }

    private:
    Singleton() {}

    static Singleton s_Instance;	//because it is static, has to be definedj
};

Singleton Singleton::s_Instance;	//defined herekj

int main() {
    Singleton::Get();				//access the singleton via Get();

    //Singleton Another = Singleton::Get();

    return 0;
}