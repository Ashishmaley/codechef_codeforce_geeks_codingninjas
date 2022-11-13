#include <iostream>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
//ashish maley
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,ans=0;
	cin>>a>>b;
	if((a-b)%8==0)
   {ans=(b-a)/8;}
   else
   {ans=(b-a)/8+1;}
   cout<<ans<<endl;}
    return 0;
}

