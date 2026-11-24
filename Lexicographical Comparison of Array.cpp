#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    vector<int> cur = {1, 2, 9};
    vector<int> res = {1, 2, 4, 5};
    
    cout << "========= lexicographical comparison ==========\n";
    
    if (cur < res)
        cout << "True: cur is lexicographically smaller\n";
    
    else
        cout << "False: cur is not lexicographically smaller\n";

    return 0;
}

/*

Lexicographical Comparison


*/