int kadanes(vector<int>v,int n)
{
    int mx=INT_MIN,an=0;
    for (int i=0;i<n;i++)
    {
        an+=v[i];
        if(an>mx)
        {
            mx=an;
        }
        if(an<0){
            an=0;
            
        }
    }
 return mx;   
}
int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
    int res=INT_MIN;
	// write your code here
    for(int i=0;i<n;i++)
    {
        vector<int>v(m);
        for (int j=i;j<n;j++)
        {
            for (int col=0;col<m;col++)
            {
                v[col]+=arr[j][col];
            }
            int temp=kadanes(v,m);
            res=max(res,temp);
        }
    }
    return res;
}
