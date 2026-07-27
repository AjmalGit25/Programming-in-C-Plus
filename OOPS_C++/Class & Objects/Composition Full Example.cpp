#include <iostream>
using namespace std;

class Birthday {
public:
	Birthday (int d, int m, int y) : day(d), month(m), year(y) {}

	void printDate () {
		cout << month << "/" << day << "/" << year << endl;
	}

private:
	int day;
	int month;
	int year;
};

class Person {
public:
	Person (string n, Birthday b) : name(n), bd(b) {}

	void printInfo () {
		cout << name << endl;
		bd.printDate();
	}

private:
	string name;
	Birthday bd;
};

int main () {
	Birthday bd (2, 21, 1985);
	Person me ("Ajmal", bd);

	me.printInfo();

	return 0;
}