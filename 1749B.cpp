#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool ashu(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll ans=0;
		ll n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)cin>>b[i];
		vector<pair<int,int> >v;
		for(int i=0;i<n;i++)
		{
			v.push_back(make_pair(a[i],b[i]));
		}
		sort(v.begin(),v.end(),ashu);
		ans=v[n-1].first;
		for(int i=0;i<n-1;i++)
		{
			ans+=v[i].second+v[i].first;
		}
		cout<<ans<<endl;
	}
	return 0;
}
