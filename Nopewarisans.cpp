#include <iostream>
using namespace std;

class baseClass final {
public:
    virtual void perkenalan(){
        cout << "hallo saya function dari base class";
    }
};

class baseClass1 {
public:
    virtual void perkenalan(){
        cout << "hallo saya function dari base class";
    }
};

class derivedClass : public baseClass1 {
public:
    virtual void perkenalan1(){
        cout << "hallo saya function dari derived class";
    }
};

int main(){
    derivedClass a;
    a.perkenalan1();

    return 0;
}