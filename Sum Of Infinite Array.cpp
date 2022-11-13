int mod = 1000000007;
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    // Write your code here
    vector <int> ans;
    for(int i=0;i<q;i++)
    {
        vector<long long>as=queries[i];
        for(int j=0;j<as.size();j++)
        {
            int l=as[i];
            for (int k=0;k<l;k++)
            {
                ans[k]=(ans[k]+arr[k])%mod;
            }
        }
    }
    return ans;
}
