#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    sort(arr,arr+n);
	    int maxx=INT_MIN,count=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if (arr[i]==arr[i+1])
	        {
	            count++;
	        }
	        if(count>=maxx)
	        {
	            maxx=count;
	        }
	        if(arr[i]!=arr[i+1])
	            {count=0;}
	        }
	        cout<<(n-1)-maxx<<endl;
	    }
	
	return 0;
}
