#include <iostream>
#include "dog.h"
#include "cat.h"

using namespace std;

int main() {
    Dog dog;
    dog.printName();
    dog.showWindow();

    Cat cat;
    cat.printName();
    cat.showWindow();
};

