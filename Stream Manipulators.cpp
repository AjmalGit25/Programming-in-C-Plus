#include <iostream>
#include <iomanip>			// Stream Manipulators
using namespace std;

int main () {
    float f = 12.3456789f;
    double d = 12.345678912345;

    cout << fixed;

    cout << setprecision (3) << f << endl;
    cout << setprecision (6) << d << endl;

    return 0;
}

/*

#include <iomanip>

	fixed
	scientific
	setprecision(n)
	setw(n)
	setfill(ch)
	left
	right
	boolalpha
--------------------------------------


*/