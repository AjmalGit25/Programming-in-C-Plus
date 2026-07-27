#include <iostream>
using namespace std;

class Temperature {
public:
	int temperature;

	Temperature (int t): temperature(t) {}

	Temperature operator++ () {
        return Temperature (++temperature);
    }
};



int main() {
	Temperature t (25);

	++t;

	return 0;
}