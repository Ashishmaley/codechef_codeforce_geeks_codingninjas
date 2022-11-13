#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(y==0)
    cout<<"0"<<endl;
    else
    if(y<=z)
    cout<<x<<endl;
    else 
    if(y>z&&y%z==0)
    {
        cout<<x*(y/z)<<endl;
    }
    else if(y>z&&y%z!=0)
    cout<<x*((y/z)+1)<<endl;
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
