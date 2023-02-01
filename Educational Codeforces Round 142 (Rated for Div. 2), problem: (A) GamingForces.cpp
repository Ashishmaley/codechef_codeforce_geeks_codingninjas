#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,count=0,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
for(int i=0;i<n;i++)
    {
     
if(arr[i]==1)
        count++;
}
 
    if(count%2==0)
    ans=count/2+n-count;
    else
    ans=count/2+n-count+1;
    
    cout<<ans<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}
