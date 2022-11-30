#include <iostream>
using namespace std;
#define ll long long
void solve(){
        ll n;
        cin>>n;
        ll sum=((n-1)*n)*2/4;
        ll k;
        cin>>k;
        if(n/2>=k)
        sum=sum-(((n-2*k)-1)*(n-2*k))*2/4;
        cout<<sum<<endl;
}

int32_t main() {
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
