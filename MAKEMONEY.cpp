#include <bits/stdc++.h> 
using namespace std;
#define ll long long
void solve() 
{ 
    ll cost = 0;
    ll n;cin>>n;
    vector<int>v(n);
    ll x;cin>>x;
    ll c;cin>>c;
    for(auto&xx:v)cin>>xx;
    for(auto&xx:v)
    { 
        if(x<=xx)continue;
        ll gain = abs(xx-x);
        if(c<gain)
        { xx = x; cost+=c; } 
    }
    ll sum = accumulate(v.begin(),v.end(), 0LL);
    ll ans = abs(cost-sum);
    cout<<ans<<endl;
    }
    
    
    int main()
   { int t;
     cin>>t;
     while(t--)solve();
     return 0;
   }
