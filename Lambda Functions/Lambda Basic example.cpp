#include <iostream>
using namespace std;

int main () {
	auto message = []() {
		cout << "Hello World!\n";
	};

	message();
	
	return 0;
}


/*

Lambda Functions:
	-> A lambda function is a small, anonymous function you can write directly in your code. 
	-> It's useful when you need a quick function without naming it or declaring it separately.
	-> Think of it as a "mini function on the fly."

----------------------------------------------------------
Syntax:
	[capture] (parameters) { code };


*/