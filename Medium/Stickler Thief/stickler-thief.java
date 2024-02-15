//{ Driver Code Starts
import java.util.*;
import java.io.*;

class GFG
 {
	public static void main (String[] args)
	 {
	  
	  //taking input using Scanner class
	  Scanner sc = new Scanner(System.in);
	  
	  //taking count of testcases
	  int t = sc.nextInt();
	  while(t-- > 0){
	      
	      //taking count of houses
	      int n = sc.nextInt();
	      int arr[] = new int[n];
	      
	      //inserting money present in 
	      //each house in the array
	      for(int i = 0; i<n; ++i)
	           arr[i] = sc.nextInt();
  	      
  	      //calling method FindMaxSum() of class solve
  	      System.out.println(new Solution().FindMaxSum(arr, n));
	 }
   }
}
// } Driver Code Ends


class Solution
{
    int[] dp;
    //Function to find the maximum money the thief can get.
    public int FindMaxSum(int arr[], int n)
    {
        int sum=0;
        dp = new int[n];
        Arrays.fill(dp,-1);
        return solve(arr,n,0);
    }
    
    int solve(int arr[], int n, int index) {
        if (index >= n)
            return 0;
        if(dp[index]!=-1)return dp[index];
        int include = arr[index] + solve(arr, n, index + 2);
        int exclude = solve(arr, n, index + 1);
        dp[index] = Math.max(include, exclude);
        return dp[index];
    }
    
    // int solve(int arr[],int n,int index,int sum){
    //     if(index>=n)return sum;
    //     return Math.max(solve(arr,n,index+2,sum+arr[index]),solve(arr,n,index+1,sum));
    // }
    
    // int solve(int arr[], int n, int index) {
    //     if (index >= n)
    //         return 0;
    //     int include = arr[index] + solve(arr, n, index + 2);
    //     int exclude = solve(arr, n, index + 1);
    //     return Math.max(include, exclude);
    // }
    
}