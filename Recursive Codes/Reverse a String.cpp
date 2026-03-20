
string revStr (string str) {
    // base case
    if (str.empty()) return ""; 
    
    return revStr (str.substr (1)) + str[0];
}