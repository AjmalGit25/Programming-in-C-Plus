
// What is Composition?

// In the real world, complex objects are typically built using smaller, simpler objects.
// For example, a car is assembled using a metal frame, an engine, tires, and a large number of other parts. 
// This process is called composition.

class Birthday {
public:
	Birthday (int m, int d, int y): month(m), day(d), year(y) {}

private:
	int month;
	int day;
	int year;
};

class Person {
public:
    Person(string n, Birthday b)
        : name(n), bd(b) {}

private:
    string name;
    Birthday bd;
};

/*

Composition 

This is one of the four fundamental relationships in OOP:

	Inheritance -> is-a
	Composition -> has-a
	Aggregation -> has-a (weaker)
	Association -> uses-a / knows-a

Definition:
	Composition is an OOP relationship in which one class contains objects of another class as its data members to implement a "has-a" relationship.

*/