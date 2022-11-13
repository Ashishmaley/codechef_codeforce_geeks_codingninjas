#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
        string s;
        cin>>s;
        long long count1=0,count0=0;
        long long flag=0,flag1=0;
        for(int i=0;i<n;i++)
        {
        	if(s[i]=='0')
        	count0++;
        	else
        	count1++;	
		}    
		for(int i=0;i<n;i++)
        {
        	if(s[i]=='1')
        	flag++;
        	else
        {
			flag1=max(flag1,flag);
			flag=0;	
		}
		}    
		if(flag1==count1&&count1>count0)
		cout<<count1*count1<<endl;
		else
		if(flag1==count1&&count1<count0)
		cout<<count0*count0<<endl;
		else
		cout<<count1*count0<<endl;
    }
    
    
    return 0;
}
