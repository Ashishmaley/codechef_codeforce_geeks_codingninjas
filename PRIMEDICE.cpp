#include <iostream>
using namespace std;
void solve(){
    int a,b,flag=0;
    cin>>a>>b;
    int c=a+b;
    for(int i=2;i<=c/2;i++)
    {
       if(c%i==0)
     {  flag=1;
       break;}
    }
    if(flag==1 || c==1 || c==0)
    {
        cout<<"bob\n";
    }
    else if(flag==0)
        cout<<"alice\n";
    }
    


int main() {
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
