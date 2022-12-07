#include <iostream>
using namespace std;

void solve(){
    int a,b,ans=1;
    cin>>a>>b;
    int n=b-a;
    for(int i=0;i<n;i++)
    {
        ans*=2;
    }
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
