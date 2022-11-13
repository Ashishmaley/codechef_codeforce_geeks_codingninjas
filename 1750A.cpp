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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int b=a[0];
        sort(a,a+n);
        if(a[0]==b){
            cout<<"yes"<<endl;}
            else
            {
                cout<<"no"<<endl;
            }
        
    }
    
    
    return 0;
}
