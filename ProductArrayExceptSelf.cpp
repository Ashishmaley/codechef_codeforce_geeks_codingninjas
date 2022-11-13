int multiply(int a, int b)
{
    int mod = 1e9 + 7;
    long long ret = a % mod;
    ret *= (b % mod);
    ret = ret % mod;
    return ret;
}

int *getProductArrayExceptSelf(int *arr, int n)
{
    int *output = new int[n];
    int product = 1;

    for (int i = 0; i < n; ++i) 
    {
        output[i] = product;
        product = multiply(product, arr[i]);
    }

    product = 1;

    for (int i = n - 1; i >= 0; --i) 
    {
        output[i] = multiply(product, output[i]);
        product = multiply(product, arr[i]);
    }

    return output;
}
