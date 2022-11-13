#include <iostream>
using namespace std;
void solve()
{
    int n,q,ans=0;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    ans+=arr[i];
    for(int i=0;i<q;i++)
    {int a,b;
    cin>>a>>b;
    if((a-b)%2==0)
    ans++;}
    cout<<ans<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
