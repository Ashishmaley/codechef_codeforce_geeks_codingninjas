//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        deque<int>q;
        vector<int>ans;
        for(int i=0;i<k;i++){
        while(!q.empty()&&arr[q.back()]<arr[i]){
                q.pop_back();
            }
            q.push_back(i);
        }
        ans.push_back(arr[q.front()]);
        for(int i=k;i<n;i++){
            while(!q.empty() && q.front()<=i-k){
                q.pop_front();
            }
            while(!q.empty()&&arr[q.back()]<=arr[i]){
                q.pop_back();
            }
            q.push_back(i);
            ans.push_back(arr[q.front()]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends