//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int res=0;
	    vector<int>arr1(n,0);
	    for(int i=0;i<n;i++){
	        int maxi=0;
	        for(int j=0;j<i;j++){
	            if(arr[j]<arr[i]){
	                maxi = max(arr1[j],maxi);
	            }
	        }
	        arr1[i]=arr[i]+maxi;
	        res = max(res,arr1[i]);
	    }
	    return res;
	}
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends