#include<algorithm>
long long maxSubarraySum(int arr[], int n)
{
    long long int Max=-1e15,sum=0;
    for (int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        Max=max(Max,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    if(Max<0)
        return 0;
    return Max;
}
