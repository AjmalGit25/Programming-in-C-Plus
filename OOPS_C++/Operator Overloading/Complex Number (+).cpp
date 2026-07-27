#include <iostream>
using namespace std;

class Complex {
public:
	int real;
	int imag;
	
	Complex (int r, int i): real(r), imag(i) {}
	
	Complex operator+ (const Complex& other) {
	    return Complex (real + other.real, imag + other.imag);
	}
};

int main() {
	Complex c1 (2, 3);
	Complex c2 (4, 5);

	Complex c3 = c1 + c2;

	return 0;
}