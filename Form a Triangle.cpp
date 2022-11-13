#include <bits/stdc++.h> 
bool possibleToMakeTriangle(vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(unsigned int i=0;i<arr.size()-2;i++)
    {
        if(arr[i]<(arr[i+1]+arr[i+2])  && arr[i+2]<(arr[i+1]+arr[i] )&& arr[i+1]<(arr[i]+arr[i+2]))
            return true;
    }
    return false;
}
