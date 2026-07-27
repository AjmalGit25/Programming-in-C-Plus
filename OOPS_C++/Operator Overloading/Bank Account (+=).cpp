#include <iostream>
using namespace std;

class Account {
public:
	int amount;

	Account (int amount): amount(amount) {}

	Account operator+= (const Account& other) {
	    return (amount += other.amount);
	}
};



int main() {
	Account a (1000);

	a += 600;

	return 0;
}