#include <iostream>
using namespace std;
#define ll long long int
void solve(){
    ll  x1, y1, x2, y2, N;
    cin >> N >> x1 >> y1 >> x2 >> y2; 
    ll c = min(min( x2 ,N - x2 +1), min( y2 ,N - y2+ 1)) + min(min( y1 , N - y1 + 1),min( x1 , N - x1 + 1));
    ll c1 =  abs(y1 - y2)+abs(x1 - x2);
    cout << min(c, c1)<<"\n";
    
}

 signed main() {
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
