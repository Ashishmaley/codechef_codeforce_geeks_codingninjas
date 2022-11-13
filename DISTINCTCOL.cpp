#include <iostream>
using namespace std;
void solve()
{
   int n,maxx=0;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       maxx=max(maxx,arr[i]);
   }
   cout<<maxx<<endl;
   
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
