#include <iostream>
using namespace std;
void solve()
{
    int A,B;
    cin>>A>>B;
    if(A==B||A*2<=B)
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
