#include <iostream>
using namespace std;

class Person{
    string name;
    int* age;		// pointer of age
    
public:
    Person(string n, int a) {
        name = n;
        age = new int(a);
    }
    
    Person(const Person& obj) {
        cout << "Custom Deep Copy constructor!!\n";
        name = obj.name;
        age = new int(*obj.age);
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << *age << endl;
    }
    
    void setAge(int a) {
        *age = a;
    }
};

int main() {
    Person p1("Kalesh", 20);
    
    Person p2(p1);      // direct initialization
    Person p3 = p2;     // copy initialization
    
    p1.display();
    p2.display();
    
    p1.setAge(35);		// Only p1 age changes
    p2.setAge(25);		// Only p2 age changes
    
    p1.display();
    p2.display();

    return 0;
}

/*

Note: Use "this->" pointer if there is naming conflict.

age = new int(a);	Allocates new memory and changes the pointer
*age = a;			Changes the value at the existing memory location

*/