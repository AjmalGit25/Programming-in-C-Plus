#include <iostream>
using namespace std;

class MyString {
public:
	string name;

	MyString (string n): name(n) {}

	MyString operator+ (const MyString& other) {
		return MyString (name + other.name);
	}
};

int main () {
	MyString s1 ("Hello ");
	MyString s2 ("Ajmal");

	MyString s3 = s1 + s2;

	return 0;
}
