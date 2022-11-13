#include <bits/stdc++.h> 
void swap(int arr[],int a,int b)
{
   int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void sort012(int *arr, int n)
{
    int low=0,mid=0,high=n-1;
   //   Write your code here
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr,mid,low);
            low++;
            mid++;
        }
        else
        if(arr[mid]==1)
            mid++;
        else{
            swap(arr,mid,high);
            high--;
        }
    }
}
