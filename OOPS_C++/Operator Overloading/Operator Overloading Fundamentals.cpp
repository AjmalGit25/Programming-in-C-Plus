#include <iostream>
using namespace std;

class Point {
public:
	int x;
	int y;
};

int main () {
	Point p1{2, 3};
	Point p2{4, 5};
	
	Point p3 = p1 + p2;						// error

	return 0;
}



class Point {
public:
    int x;
    int y;

    Point (int x, int y) : x(x), y(y) {}

    Point operator+ (const Point& other) {
        return Point (x + other.x, y + other.y);
    }
};

int main () {
	Point p1{2, 3};
	Point p2{4, 5};
	
	Point p3 = p1 + p2;						// Now works

	return 0;
}



/*

Definition:
	Operator overloading allows us to redefine the behavior of existing operators (such as +, -, ==, <<, etc.) for user-defined types (classes and structs).

----------------------------------------------------------------
() -> Constructor call (traditional, still very common)
{} -> Uniform initialization (modern, often preferred)

----------------------------------------------------------------
+   Addition
-   Subtraction
*   Multiplication
/   Division
==  Equality
!=  Not equal
<   Less than
>   Greater than
<<  Output (cout)
>>  Input (cin)
[]  Array indexing
()  Function call

----------------------------------------------------------------
The compiler already knows:

	int + int
	double + double
	float + float

Operator overloading allows you to add another rule:

	Point + Point
	Box + Box
	Complex + Complex
	Student == Student

*/