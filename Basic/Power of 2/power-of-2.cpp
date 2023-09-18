//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long N){
        
        // Your code here    
    // Check if N is non-negative
    if (N <= 0) {
        return false;
    }

    // Count the number of set bits (1s) in the binary representation of N
    int countOnes = 0;
    while (N) {
        countOnes += N & 1;
        N >>= 1;
    }

    // If there is exactly one set bit, N is a power of 2
    return (countOnes == 1)?1:0;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}

// } Driver Code Ends