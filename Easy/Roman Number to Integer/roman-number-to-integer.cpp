//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
 
 map<string,int> mp {
        {"I", 1},
        {"IV", 4},
        {"V", 5},
        {"IX", 9},
        {"X", 10},
        {"XL", 40},
        {"L", 50},
        {"XC", 90},
        {"C", 100},
        {"CD", 400},
        {"D", 500},
        {"CM", 900},
        {"M", 1000}
 };
  
    int romanToDecimal(string &str) {
        // code here
        int n = str.size(); 
        int ans=0;
        for(int i=0;i<n;i++){
            if(mp.find(str.substr(i,2))!=mp.end()){
                ans+=mp[str.substr(i,2)];
                i++;
            }else {
                 ans+=mp[str.substr(i,1)];
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends