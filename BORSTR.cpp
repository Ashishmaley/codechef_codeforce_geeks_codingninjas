#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{ 
    ll n;
    string s;
    cin>>n;
    cin>>s;
    char curr = s[0];
    int len = 1;
    int maxx = 0;
    map<pair<char,int>,int>freq;
    freq[{curr,len}]++;
    for(int i=1;i<n;i++)
    {
        if(s[i]!=curr)
        {
           curr = s[i];
            len = 1;
            }
            else len+=1;
            freq[{curr,len}]++;
            }
            for(auto&it:freq)
            {
                if(it.second==1)
                {
                    maxx = max(it.first.second-1,maxx);
                    continue;
                    }
                    maxx = max(it.first.second,maxx);
                    }
                    cout<<maxx<<endl;
                    }
                    
                    int main() 
                    {
                        int t;
                        cin>>t;
                        while(t--)solve();
                        
                    }
