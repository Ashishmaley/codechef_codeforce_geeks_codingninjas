#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,mx=0,one=0,pre=0;
    cin>>n; 
    string s; cin>>s; 
    int j=0;
    while( s[j]=='1'&& j<n)
    { 
        pre++;
        j++;
    } 
    for(int i=j; i<n; i++)
    { 
        if(s[i]=='1') 
        {
            one++;
        }
        else
        { 
            mx=max(one,mx); one=0;
        } 
        
    }
    mx = max(one,mx);
    cout<<pre+mx<<endl;
} 

int main() 
	{ // your code goes here 
	int t; cin>>t; 
	while(t--) 
	{
     	solve();
	}
	return 0;
}

