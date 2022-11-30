#include <bits/stdc++.h>
using namespace std;
int ff[27][2];
int c(int my, int my2, int my_sub, int l, int w){
    if ( my2==0 && my==0 && my_sub==0){
        if(w==0)
		{return 0;}
        return 1;
    }
    if(ff[l][w] != -1)
	return ff[l][w];
	int v2 = ((my2%2)^0) + ((my%2)^0) + w;
    int v1 = ((my2%2)^1) + ((my%2)^1) + w;
    int sol=0;
    if(v2%2==(my_sub%2)^0){
        sol=max(sol, c(my/2,my2/2,my_sub/2,l+1,v2/2)); 
    }
    if(v1%2==(my_sub%2)^1){
        sol=max(sol, c(my/2,my2/2,my_sub/2,l+1,v1/2));
    }
    ff[l][w]=sol;
    return ff[l][w];
    
}


void solve(){
      int my, my2, my_sub;
        cin>>my>>my2>>my_sub;
        for(int l=0;l<27;l++) {
            ff[l][1] = ff[l][0] = -1;
        }
        
        if(c(my, my2, my_sub, 0,0)) cout<<"NO\n";
        else cout<<"YES\n";

    
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
