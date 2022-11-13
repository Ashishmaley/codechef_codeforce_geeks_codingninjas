void reverse(string& str) {
    int n = str.length(); 
  
    // Swap character starting from two corners. 
    for (int i = 0; i < n / 2; i++) {
        char c = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = c; 
    }
} 

string leftRotate(string str, int d) {
    
    // Store the size of given string.
    int n = str.size();

    // If rotate multiple times.
    if(n < d) {
        return leftRotate(str, d % n);
    }

    // Reverse first 'd' characters.
    reverse(str.begin(), str.begin() + d);

    // Reverse last 'n' - 'd' characters.
    reverse(str.begin() + d, str.end());

    // Reverse whole string.
    reverse(str.begin(), str.end());

    // Reach this means your ans is computed.
    return str;

}

string rightRotate(string str, int d) {

    // Store the size of given string.
    int n = str.size();

    // If rotate multiple times.
    if(n < d) {
        return rightRotate(str, d % n);
    }

    // Left Rotate the string by n-d units.
    string ans = leftRotate(str, n - d);

    // Reach this means your ans is computed.
    return ans;

}
