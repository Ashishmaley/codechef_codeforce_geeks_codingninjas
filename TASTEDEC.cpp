#include <iostream>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    if((a*2)==(b*5))
    cout<<"Either"<<endl;
    else
    if((a*2)>(b*5))
    cout<<"Chocolate"<<endl;
    else 
    if((a*2)<(b*5))
    cout<<"Candy"<<endl;
    
    
    
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
