#include <bits/stdc++.h> 
int subArrayCount(vector<int> &arr, int k) {
    // Write your code here.
   unordered_map<int ,int>remMap;
    remMap[0]=1;
    int count =0;
    long summ=0;
    for (int i=0;i<arr.size();i++)
    {
        summ+=arr[i];
        int rem=(summ%k+k)%k;
        if(remMap.find(rem)!=remMap.end())
        {
            count+=remMap[rem];
            remMap[rem]+=1;
        }
        else
           { remMap[rem]=1;}
    }
        
   return count; 
}
