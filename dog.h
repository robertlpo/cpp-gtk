#ifndef DOG
#define DOG

#include "animal.h"

class Dog : public Animal {
public:
    Dog(string _name);
    void dogSound();
};

#endif
