#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 998244353
int main()
{
    ll t;
    cin>>t;
    while(t--)
    { 
        ll n,c=0, s=1 ;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        { 
            cin>>v[i];
        }   
        
        for(ll i=0;i<n;i++)
        { 
            if(v[i]==1) 
            { c++; }
        }  
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
            if( c>0 && v[i]!=1 && v[i]%2==0 )
            {
              c--;
              v[i]++;
            } 
        }
        for(ll i=0;i<n;i++) 
        {
          s=(v[i]%m*s%m)%m;
        } 
        cout<<s<<endl;
    }
    return 0;
}