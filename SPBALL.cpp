#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
#define ll long long
ll dp[1000001];
void solve(){
    ll n,ans=0;
    cin>>n;
    map<ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        ll v;
        cin>>v;
        mp[v]++;
    }
    for(auto it : mp)
    ans=(ans+(it.second*dp[it.first])%m)%m;
    cout<<ans<<endl;
}

int main() {
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=1000000;i++)
    {
        dp[i]= (i*(dp[i-1]%m))%m;
    }
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
