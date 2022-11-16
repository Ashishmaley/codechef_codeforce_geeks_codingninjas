#include <iostream>
using namespace std;
#define l long long int
void solve(){
    l n,q,k=64;
    cin>>n>>q;
    l a[k][n];
    for(l i=0; i<n; i++)
    {

      l x;
      
      cin>>x;
      
      for(l j=0; j<k; j++)
      {
        a[j][i]=(int)(x%2);
        x/=2;
      }
      
        
    }
      for(l i=0; i<k; i++)

      {
          l count=0; for(int j=0; j<n; j++)
      {
        count+=a[i][j]; 
        a[i][j] =count;
      }
      }
      while(q--)
      {
      l l1,r1,l2,r2,k;
      cin>>k>>l1;l1--;cin>>r1; r1--;cin>>l2;l2--;cin>>r2;r2--;
       l totalfo,totalso;
       l totalf=r1-l1+1;
       l totals=r2-l2+1;
       
      if(l2==0)
      {
      totalso=a[k][r2];
      }
      else totalso=abs(a[k][l2-1]-a[k][r2]);
      if(l1==0)
      {
      totalfo=a[k][r1];
      }
      else
      totalfo=abs(a[k][l1-1]-a[k][r1]);
      l sum=(l)(totals-totalso) * (l) (totalfo)+ (l)(totalso)* (l) (totalf-totalfo); 
      cout<<sum<<endl;
      }
} 
      
       
int main() {
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
