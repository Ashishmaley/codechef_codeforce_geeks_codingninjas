#include <iostream>
using namespace std;
void solve()
{
    int i=2,n; cin >> n;
    bool flag = true;
    for( i ; flag && i*i <= n ; i++)
    { if(n % i == 0)
    { if(n / i != i)
    { cout << 1 << " " << i << " " << n / i << endl;
    flag = false; } } } 
    if(flag)
    cout<<-1<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
