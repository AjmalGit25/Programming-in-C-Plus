#include <iostream>
using namespace std;

class Vector2D {
public:
	int x;
	int y;

	Vector2D (int x, int y): x(x), y(y) {}

	Vector2D operator+ (const Vector2D& other) {
		return Vector2D (x + other.x, y + other.y);
	}
};



int main () {
	Vector2D v1 (2, 3);
	Vector2D v2 (4, 5);

	Vector2D v3 = v1 + v2;
	
	return 0;
}