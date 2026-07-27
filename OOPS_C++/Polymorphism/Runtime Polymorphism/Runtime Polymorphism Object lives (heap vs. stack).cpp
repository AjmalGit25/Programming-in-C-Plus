#include <iostream>
using namespace std;

class Animal {
public:
	virtual void sound () = 0;
};

class Dog : public Animal {
public:
	void sound () override {
		cout << "Dog barks." << endl;
	}
};


int main () {

	// 1. Dynamically allocated object (heap)

	Animal* dog = new Dog();
	dog -> sound();



	// 2. Automatically allocated object (stack)

	Dog dog;
	Animal* a = &dog;
	a->sound();


	return 0;
}


/*

1. Dynamically allocated object (heap)

    dog->sound() uses runtime polymorphism.
    delete is needed because the object is not destroyed automatically.


2. Automatically allocated object (stack)
    
    a->sound() also uses runtime polymorphism.
    No delete is needed because the object is destroyed automatically.



Pure Virtual Function:
	The virtual member functions without definition are known as pure virtual functions. 

*/