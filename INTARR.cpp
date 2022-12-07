#include <bits/stdc++.h>
using namespace std;
#define int long long
void wSort(vector<int>& nums) {
        int size = nums.size();
        nth_element(begin(nums),size / 2 + begin(nums), end(nums));
        int m = *(size / 2 + begin(nums) );
        #define A(i) nums[(2*(i)+ 1 ) % (size | 1)]
 
           int r = size - 1,l = 0;
           for (int i = 0; i <= r;)
           if (A(i) > m) swap(A(l++), A(i++));
           else if ( m > A(i)) swap(A(r--), A(i));
           else i++;
 }
signed main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
    a.push_back(x);
    }
    wSort(a);
    int point=0;
    for(int i=0;i<n-2;i++){
        if( a[i+2]>=a[i+1] && a[i+1]>=a[i] )
        point=1;
        }
        if(point!=0){
        cout<<"-1";
        }
        else{
            for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        }
        cout<<"\n";
}
return 0;
}