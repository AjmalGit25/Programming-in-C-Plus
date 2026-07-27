#include <iostream>
using namespace std;

class Person {
public:
    string name;
	int age;

	Person (string n, int a): name(n), age(a) {}

	bool operator== (const Person& other) {
		return (age == other.age);
	}
};



int main() {
	Person p1 ("Ajmal", 22);
	Person p2 ("Rahul", 22);
	Person p3 ("John", 25);

    cout << (p1 == p2) << endl;   // 1 (true)
    cout << (p1 == p3) << endl;   // 0 (false)

	return 0;
}