#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int t;cin>>t;
    while(t--){
        unsigned long long a,b;cin>>a>>b;
        if(a==1||b==1){
            cout<<-1<<endl;
        }else{
            unsigned long long hcf = __gcd(a,b);
            if(hcf==1){
                cout<<1<<endl;
            }else{
                cout<<0<<endl;
            }    
        }
        
    }
    return 0;
}