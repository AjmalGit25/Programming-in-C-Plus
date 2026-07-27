#include <iostream>
using namespace std;

class Car {
public:
	string name;
	int speed;

	Car (string n, int s): name(n), speed(s) {}

	bool operator> (const Car& other) {
		return speed > other.speed;
	}
};

int main () {
	Car c1 ("BMW", 220);
	Car c2 ("Audi", 240);

	cout << (c1 > c2);

	return 0;
}