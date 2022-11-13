#include <bits/stdc++.h>
using namespace std;
void solve()		
{
int n;	
cin>>n;
int arr[n];	
int min=INT_MAX;
for(int i=0; i<n; i++)
{	 cin>>arr[i];	
if(arr[i]<min)	
min=arr[i];	 }	
int ans=0;	
int temp=0;	
for(int i=0; i<n; i++)	 {	
    if(min!=arr[i])
    {
        if(arr[i]%min==0)	 
        ans++;	
    else	 
    {	 temp=1;
    break;
    }
  }
    
}	
if(temp)
cout<<n<<endl;
else	
cout<<ans<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	solve();}
	return 0;
}
