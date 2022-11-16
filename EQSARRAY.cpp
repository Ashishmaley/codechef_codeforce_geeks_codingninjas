#include <iostream>
using namespace std;

void solve(){
    int n,k,flag = 0;;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    { 
        cin>>a[i];
        if( i!=n-1 && a[i]==k )
        { flag=1; } } 
        if( k==a[0] && n==1 ){ 
            cout<<"Yes\n"; }
            else{
            if(!flag)
            { 
                cout<<"No\n";
                } 
            else{ 
                cout<<"Yes\n";}}
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
