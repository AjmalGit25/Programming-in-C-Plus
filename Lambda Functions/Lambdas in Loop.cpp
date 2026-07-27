#include <iostream>
using namespace std;

int main () {
	for (int i = 1; i <= 50; i++) {
        auto show = [](int i) {
            cout << "Number: " << i << endl;
        };
        
        show (i);
	}

	return 0;
}