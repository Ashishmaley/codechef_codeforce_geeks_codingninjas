#include <iostream>
using namespace std;
void solve()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(a<=b&& (b-a)<=c)
  cout<<"yes\n";
 else if(a>=b&&(a-b)<=d)
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
