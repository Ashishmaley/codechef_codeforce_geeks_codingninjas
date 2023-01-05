#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n],l,c=0,next=1;
    for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<n;i++){
       if(a[i]==next){
           c++;
           next++;
       }
   }
    l=n-c;
   if(l%k==0){
      cout<<l/k;
      cout<<endl;
   }else{
    cout<<l/k+1;
    cout<<endl;
   }
 
 
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
 
        solve();
    }
     //solve();
 
    return 0;
}
