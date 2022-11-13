int fibonacciNumber(int n){
    // Write your code here.
    int m=1000000007;
        int f[n];
           f[0]=0;
         f[1]=1;
        for(int i=2;i<=n;i++)
        {
            f[i]=(f[i-1]%m+f[i-2]%m)%m;
        }
        
    
    return f[n];
