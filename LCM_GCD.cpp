#include <bits/stdc++.h>
using namespace std;
void solve(int a,int b){
    { 
    cout<<a -__gcd(a,b) <<endl;
    }
    
}

int main() 
	{ // your code goes here 
	int t; cin>>t; 
	while(t--) 
	{
	    int a,b;
        cin>>a>>b;
     	solve(a,b);
	}
	return 0;
}
