#include <iostream>
using namespace std;

class Fraction {
public:
	int x;
	int y;

	Fraction (int x, int y): x(x), y(y) {}

	Fraction operator+ (const Fraction& other) {
	    int numerator = x * other.y + other.x * y;
	    int denominator = y * other.y;
	    
		return Fraction (numerator, denominator);
	}

	void print () {
	    cout << this-> x << ", " << this->y;
	}
};

int main () {
	Fraction f1 (1, 2);
	Fraction f2 (1, 3);

	Fraction f3 = f1 + f2;

	f3.print();

	return 0;
}