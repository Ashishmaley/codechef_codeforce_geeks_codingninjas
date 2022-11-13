#include <iostream>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    cout<<"yes\n";
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
