#include <iostream>
#include <vector>
#include <string>

class Animal {
public:
    virtual void makeSound() const = 0;

};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Woof, I am a dog.\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Meow, I am a cat.\n";
    }
};

class Cow : public Animal {
public:
    void makeSound() const override {
        std::cout << "Moooooo, I am a cow.\n";
    }
};

int main() {
    std::vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Cow());

    for (Animal* animal : animals) {
        animal->makeSound();
        delete animal;
    }
}
