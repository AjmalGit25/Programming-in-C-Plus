#include <iostream>
using namespace std;

class Animal {
public:
	virtual void sound () {											// Case 1: Virtual function with implementation
		cout << "Animal makes sound." << endl;
	}
	
	virtual ~Animal() = default;
};

class Dog : public Animal {
public:
	void sound () override {
		cout << "Woof" << endl;
	}
};

class Cat : public Animal {
public:
	void sound () override {
		cout << "Meow" << endl;
	}
};

class Cow : public Animal {
public:
	void sound () override {
		cout << "Moo" << endl;
	}
};

class Lion : public Animal {
public:
	void sound () override {
		cout << "Roar" << endl;
	}
};

class Elephant : public Animal {
public:
	void sound () override {
		cout << "Trumpet" << endl;
	}
};

int main () {
	Animal* animals[5];

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();
	animals[3] = new Lion();
	animals[4] = new Elephant();

	for(int i = 0; i < 5; i++)
		animals[i]->sound();
    
    
    for (int i = 0; i < 5; i++)
    	delete animals[i];

	return 0;
}