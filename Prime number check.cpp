#include <iostream>
using namespace std;

bool isPrime (int n) {
    if (n < 2)
        return false;
    
    for (int i = 2; i < n; i++) {			// Use i * i <= n  for larger number
        if (n % i == 0) 
            return false;
    }
    
    return true;
}

int main () {
    int number = 2;
    
    cout << isPrime (number);
    
    return 0;
}

/*

Tip: Use i * i <= n  for larger number

*/
