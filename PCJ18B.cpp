#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        for(int i=n;i>0;i-=2)
        {
            sum+=i*i;
        }
        cout<<sum<<endl;
    }
}
