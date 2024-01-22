//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int min_sprinklers(int gallery[], int n) {
        vector<pair<int, int>> range;
        for (int i=0;i<n;i++) {
            if (gallery[i]!=-1) {
                int f = max(i - gallery[i], 0);
                int s = min(i + gallery[i], n - 1);
                range.push_back({f, s});
            }
        }
        sort(begin(range), end(range));
        int ans = 0, i = 0, maxi = 0, j = 0;
        while (i < n) {
            while (j<range.size() && range[j].first<=i) {
                maxi = max(maxi, range[j].second);
                j++;
            }
            if (maxi < i) {
                return -1;
            }
            ans++;
            i = maxi + 1;
            if (i >= n) {
                break;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int gallery[n];
        for(int i=0; i<n; i++)
            cin>> gallery[i];
        Solution obj;
        cout<< obj.min_sprinklers(gallery,n) << endl;
    }
	return 1;
}

// } Driver Code Ends