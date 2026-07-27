#include <iostream>
using namespace std;

class Distance {
public:
	int distance;

	Distance (int d): distance(d) {}

	bool operator< (const Distance& other) {
		return distance < other.distance;
	}
};



int main() {
	Distance d1 (10);
	Distance d2 (15);

	return 0;
}