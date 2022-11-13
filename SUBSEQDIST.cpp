
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
signed main() 
{
ll T;
cin >> T;
while(T--)
{
ll n; cin>>n;
vector<ll> v(n), a; 
map<ll, ll> m;
for(ll i=0; i<n; i++){
 cin>>v[i];
 m[v[i]]++;
}
for(auto i:m){
a.emplace_back(i.second);
}
ll maxx=*max_element(a.begin(), a.end());
 cout<<ceil(log2(maxx))<<endl;
 }
 return 0;
}

