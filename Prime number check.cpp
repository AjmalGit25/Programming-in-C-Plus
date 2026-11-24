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

We can optimize by checking divisors only up to sqrt(n), instead of checking all the way up to n - 1.

TC:
	Simple loop: O(n)
	Optimized loop: O(sqrt(n))

*/
