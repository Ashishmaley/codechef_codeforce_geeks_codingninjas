#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[m],b[m];
		vector<pair<int,int> >p;
		for(int i=0;i<m;i++)
		{
			cin>>a[i]>>b[i];
			p.push_back(make_pair(a[i],b[i]));
		}
		if(n<=m)
	cout<<"no"<<endl;
	else
	cout<<"yes"<<endl;	
	}
	return 0;
}
