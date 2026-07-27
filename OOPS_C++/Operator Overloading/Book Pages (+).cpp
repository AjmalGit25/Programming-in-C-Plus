#include <iostream>
using namespace std;

class Book {
public:
	int pages;

	Book (int p): pages(p) {}

	Book operator+ (const Book& other) {
		return Book (pages + other.pages);
	}
};



int main() {
	Book b1 (150);
	Book b2 (300);

	Book b3 = b1 + b2;

	return 0;
}
