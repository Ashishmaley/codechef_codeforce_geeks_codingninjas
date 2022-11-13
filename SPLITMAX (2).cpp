#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,maxx=0,sum=0;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    // your code goes here
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<(((sum-1)%998244353)*(sum%998244353))%998244353<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
