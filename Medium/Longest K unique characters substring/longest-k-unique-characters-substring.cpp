//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
       int ans=0;
       int n=s.size();
       map<char,int>freq;
       int left=0,right=0;
       while(right<n){
            freq[s[right]]++;
            if(freq.size()>k){
                while(freq.size()>k){
                  
                  freq[s[left]]--;
                  if(freq[s[left]]==0){
                      freq.erase(s[left]);
                  }
                  left++;
                }
            }
           if(freq.size()==k){
              ans=max(ans,right-left+1);
            }
           right++;
        }
        if(ans==0)return -1;
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
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends