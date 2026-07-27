
class Person {
private:
    string name;

public:
    void setName(string name) {
        this->name = name;
    }
};


class Test {
public:
    void f() {      		// has this
    }

    static void g() {   	// no this
    }
};


/*

Definition:
	-> The this pointer is an implicit pointer available inside every non-static member function, 
		that allows the function to access object's data members and other member functions.
	
	-> Every object in C++ can access its own data members and member functions through an important pointer called the this pointer.

	-> The this pointer exists only in non-static member functions.


*/