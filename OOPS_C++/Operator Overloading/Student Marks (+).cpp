#include <iostream>
using namespace std;

class Student {
public:
	int marks;
	
	Student (int m): marks(m) {}
	
	Student operator+ (const Student& other) {
	    return Student (marks + other.marks);
	}
};

int main() {
	Student s1(70);
	Student s2(20);

	Student total = s1 + s2;

	return 0;
}
