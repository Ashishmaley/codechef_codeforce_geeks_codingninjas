#include<bits/stdc++.h> 
using namespace std;
void solve(){ 
    int n; 
    cin >> n;
    if(n%2==0)
    {
       cout<<"1 "<<n/2<<endl; 
    }
    else{
        cout<<"-1\n";
    }
    
 }
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; 
    cin>>t;
    while(t--){ 
        solve();
        } 
return 0;
}
