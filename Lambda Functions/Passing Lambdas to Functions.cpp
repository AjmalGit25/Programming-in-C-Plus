#include <iostream>
#include <functional> // Needed for std::function
using namespace std;

// A function that takes another function as parameter
void myFunction (function<void()> func) {
	func();
	func();
}

int main () {
    // Basic Lambda function
	auto message = []() {
		cout << "Hello World!\n";
	};

	myFunction (message);
	
	return 0;
}

/*

You can also pass a lambda function as an argument to another function.

*/