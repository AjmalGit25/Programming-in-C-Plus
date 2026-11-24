#include <iostream>
using namespace std;

class Person{
    string name;
    int age;
    
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    
    Person(const Person& obj) {
        cout << "Custom Copy constructor!!\n";
        name = obj.name;
        age = obj.age;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    
    void setAge(int a) {
        age = a;
    }
};

int main() {
    Person p1("Kalesh", 20);
    
    Person p2(p1);      // direct initialization
    Person p3 = p2;     // copy initialization
    
    p1.display();
    p2.display();

    return 0;
}

/*

This is a shallow copy.

Note: Use "this->" pointer if there is naming conflict.

*/