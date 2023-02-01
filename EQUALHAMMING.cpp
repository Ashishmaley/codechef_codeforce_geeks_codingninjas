#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
const int sz = 2e5 + 1;
int fact[sz], invfact[sz];
int mul(int b, int a)
{ 
    return (( (b % mod)*a % mod) ) % mod;
}

int binpow(int a, int b) 
{
    if (b == 0) return 1;
    int tmp = binpow(a, b / 2);
    tmp = mul(tmp, tmp);
    if (b % 2) 
    return mul(a, tmp); 
    return tmp;
    } 
    
int mod_inverse(int a, int m = mod) {
        return binpow(a, m - 2);
    }
        
void precompute() { fact[0] = invfact[0] = 1;
        for (int i = 1; i < sz; i++) {
            fact[i] = mul(i,fact[i - 1]);
            invfact[i] = mul( mod_inverse(i),invfact[i - 1]); }
    }
    
void solve() {
    int n,ans; cin >> n;
    string A, B; cin >> A >> B;
    int cnt = 0; 
    for (int i = 0; i < n; i++) 
    { 
        if (B[i] == A[i]) cnt++; 
    }
    if ((n - cnt) % 2)
    { cout << 0 << endl; return ; }
    n -= cnt;
    ans = binpow(2, cnt);
    ans = mul( mul( mul(invfact[n / 2], invfact[n / 2]),fact[n]),ans);
    cout << ans << endl;
}
    
int32_t main()      
   { 
       precompute();
       int t;
       cin>>t;
       while(t--)
       solve(); 
       
       return 0;
   }

