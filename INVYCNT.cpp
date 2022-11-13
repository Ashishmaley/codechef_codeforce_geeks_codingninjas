#include<bits/stdc++.h>
using namespace std;
int T , n , K;
int arr[200];
int main(){
  cin>>T;
  while(T--){
    cin>>n>>K;
    int a = 0 , b = 0;
    for(int j = 1 ; j <= n ; j++){
      cin>>arr[j];
      for(int i = 1 ; i < j ; i++){
        if(arr[i] != arr[j]) ++a;
        if(arr[i] > arr[j]) ++b;
      }
    }
    cout<<1ll * K * b + 1ll * a * K * (K - 1) / 2<<endl;
  }
  return 0;
}
