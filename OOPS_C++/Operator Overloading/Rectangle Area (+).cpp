#include <iostream>
using namespace std;

class Rectangle {
public:
	int length;
	int width;
	
	Rectangle (int l, int w): length(l), width(w) {}
	
	Rectangle operator+ (const Rectangle& other) {
	    return Rectangle (length + other.length, width + other.width);
	}
};



int main() {
	Rectangle r1 (4, 5);
	Rectangle r2 (2, 3);

	Rectangle r3 = r1 + r2;

	return 0;
}
