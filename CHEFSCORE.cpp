#include <iostream>
using namespace std;
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(n*a>=b&&b%a==0)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
