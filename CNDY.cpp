#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,flag=0;
    cin>>n;
    map<int,int> m;
    int arr[2*n];for(int i=0;i<2*n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    for(int i=0;i<2*n;i++)
    if(m[arr[i]]>2)
    {
        flag = 1;
        break;
    }
    if( flag == 1)
    cout<<"no\n";
    else{
        cout<<"yes\n";
    }
    
}



int main() {
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
