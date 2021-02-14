#include <iostream>
#include "dog.h"
#include "cat.h"

using namespace std;

int main() {
    Dog dog("Dog window");
    dog.printName();
    dog.showWindow();

    Cat cat("Cat window");
    cat.printName();
    cat.showWindow();

    /* static_cast test */

    Animal *panimal;
    panimal = &cat;
    panimal->printName();
    //panimal->catSound();
    static_cast<Cat*>(panimal)->catSound();

    /* dynamic_cast test */

    panimal = &dog;
    if(Dog *pdog = dynamic_cast<Dog*>(panimal))
	cout << "OK it is a dog" << endl;
    else
	cout << "NO it's not a dog" << endl;
};
