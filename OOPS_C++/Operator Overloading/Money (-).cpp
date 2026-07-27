#include <iostream>
using namespace std;

class Money {
public:
	int amount;

	Money (int a): amount(a) {}

	Money operator- (const Money& other) {
		return Money (amount - other.amount);
	}
};

int main () {
	Money wallet (1000);

	Money left = wallet - Money (250);

	return 0;
}
