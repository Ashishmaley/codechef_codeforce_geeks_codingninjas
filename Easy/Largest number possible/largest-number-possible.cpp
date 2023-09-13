//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        if (S == 0) {
            return (N == 1) ? "0" : "-1";
        }

        if (S > 9 * N) {
            return "-1";
        }

        int m = S / 9;
        int rem = S % 9;
        string ans(m, '9');
        
        if (rem > 0) {
            ans += to_string(rem);
        }
        
        ans += string(N - ans.size(), '0');
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends