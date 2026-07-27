#include <iostream>
using namespace std;

class Animal {
public:
	virtual void sound () = 0;											// Case 2: Pure virtual function
	
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
    Dog dog;
    Cat cat;
    Cow cow;
    Lion lion;
    Elephant elephant;
    
    Animal* a1 = &dog;
    Animal* a2 = &cat;
    Animal* a3 = &cow;
    Animal* a4 = &lion;
    Animal* a5 = &elephant;
    
    a1->sound();
    a2->sound();
    a3->sound();
    a4->sound();
    a5->sound();

	return 0;
}

/*

Runtime Polymorphism is achieved using:
	
	1. The base class function must be declared virtual (pure virtual function or virtual function with implementation).
	2. A base class pointer or reference must refer to a derived class object.
	3. The function is invoked through that base class pointer or reference.
	4. The call is resolved at runtime (dynamic binding), not at compile time.

*/