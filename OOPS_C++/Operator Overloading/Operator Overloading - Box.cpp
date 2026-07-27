#include <iostream>
using namespace std;

class Box {
public:
	int weight;

	Box (int w) : weight(w) {}

	Box operator+ (const Box& other) {
		return Box (weight + other.weight);
	}
};

int main() {
	Box b1(10);
	Box b2(15);

	Box b3 = b1 + b2;       // Box b3 = b1.operator+(b2);

	return 0;
}