#include <iostream>
using namespace std;
class LivingBeing {
public:
    void breathe() {
        cout << "Breathing..." << endl;
    }
};
class Animal : public LivingBeing {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};
class Mammal : public Animal {
public:
    void giveBirth() {
        cout << "Giving birth to live young..." << endl;
    }
};
class Dog : public Mammal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};
int main() {
    Dog myDog;
    myDog.breathe();
    myDog.eat();
    myDog.giveBirth();
    myDog.bark();
    return 0;
}
