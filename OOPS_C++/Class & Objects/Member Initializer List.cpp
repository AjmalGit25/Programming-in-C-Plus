class MyClass {
public:
	MyClass(int a, int b) {
		regVar = a;
		constVar = b;
	}

private:
	int regVar;             //  regular variable
	const int constVar;     //  constant variable
};

// Running this code returns an error,
// because one of its member variables is a constant,
// which cannot be assigned a value after declaration.


class MyClass {
public:
	MyClass(int a, int b) : regVar(a), constVar(b) {}       // This is called the member initializer list.

private:
	int regVar;
	const int constVar;
};

// The list begins with a colon (:), 
// and then lists each variable to be initialized, 
// along with the value for that variable, with a comma to separate them.


// Another Examples:

class Birthday {
public:
	Birthday (int m, int d, int y): month(m), day(d), year(y) {}

private:
	int month;
	int day;
	int year;
};

/*

Definition:
	A member initializer list is the part of a constructor, where it initializes data members (and base classes) before the constructor body executes.

*/