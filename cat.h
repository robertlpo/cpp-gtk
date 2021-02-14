#ifndef CAT
#define CAT

#include "animal.h"

class Cat : public Animal {
public:
    Cat(string _name);
    void catSound();
};

#endif
