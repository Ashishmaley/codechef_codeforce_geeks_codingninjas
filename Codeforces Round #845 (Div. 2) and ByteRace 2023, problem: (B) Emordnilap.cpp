#include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long int 
int main(){
   int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll res = n*(n-1);
    for(ll i = 1; i <= n; i++){
      res = (i*(res%1000000007))%1000000007;
    }
    cout<<res<<endl;
  }
 
}
