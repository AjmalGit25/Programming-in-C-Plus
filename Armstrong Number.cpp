#include <iostream>
#include <cmath>
using namespace std;

// Armstrong number
int generateArmstrong (int n) {
    
    int num = n;
    int dig = 0;
    
    // Step 1: Find digits (e.g., num = 56 then digits = 2)
    while (num) { 
        num /= 10;
        dig++;
    }
    
    num = n;
    int newNum = 0;
    
    // Step 2: Evaluate armstrong number (e.g., num = 56 then 5^2 + 6^2)
    while (num) {
        int rem = num % 10;
        
        num /= 10;
        
        newNum = newNum + pow (rem, dig);
    } 
    
    
    if (newNum == n) 
        return true;
    else
        return false;
}

int main () {
    int number = 153;
    
    cout << generateArmstrong (number);
    
    return 0;
}

/*

Some armstrong numbers: 153

*/