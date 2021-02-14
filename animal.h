#ifndef ANIMAL
#define ANIMAL

#include <string>

using namespace std;

class Animal {
public:
    Animal();
    string name;
    virtual void printName();
    virtual void showWindow();
};

#endif
