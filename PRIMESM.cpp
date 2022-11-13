#include<bits/stdc++.h>
using namespace std;
void solution()
{long long a,b;
cin>>a>>b;
if(a<2||b<2)
{cout<<"-1"<<endl;}
else if (__gcd(a,b)==1)
cout<<"1"<<endl;
else
cout<<"0"<<endl;}
int main(){
     int t;
     cin>>t;
     while(t--)
     {solution();}
    return 0;
}