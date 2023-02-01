#include <iostream>
using namespace std;
void solve(){
    int n,count0=0,count1=0;
    cin>>n;
   int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        count0++;
        else count1++;
    }
    if(count0%2==0)
    cout<<"yes\n";
    // else if(count0%2!=0&&count1>0)
    // cout<<"no\n";
    else
    cout<<"no\n";
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
