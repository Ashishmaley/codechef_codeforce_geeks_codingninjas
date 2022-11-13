#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max1=max(a,b);
    int maxx=max(max1,c);
    int min1=min(a,b);
    int minn=min(min1,c);
    cout<<maxx-minn<<endl;
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
