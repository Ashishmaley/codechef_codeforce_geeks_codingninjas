//{ Driver Code Starts
import java.util.*;
import java.io.*;
import java.lang.*;

class OptimalStrategy
{
    public static void main (String[] args) {
        
        //taking input using Scanner class
        Scanner sc = new Scanner(System.in);
        
        //taking total number of testcases
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            //taking number of elements
            int n = sc.nextInt();
            int arr[] = new int[n];
            
            //inserting the elements
            for(int i = 0; i < n; i++)
                arr[i] = sc.nextInt();
                
           //calling the countMaximum() method of class solve
           System.out.println(new solve().countMaximum(n, arr)); 
        }
    }
    
    
}
// } Driver Code Ends



class solve {
    // Function to find the maximum possible amount of money we can win.
    static long dp[][];
    static long countMaximum(int n, int arr[]) {
        
        dp=new long[n][n];
        for(int i=0;i<n;i++){
            Arrays.fill(dp[i],-1);
        }
        long ans = ssolve(arr, 0, n - 1);
        return ans;
    }

    public static long ssolve(int[] arr, int i, int j) {
        if (i == j) return  arr[i];
        else 
        if(i+1>=j)
        return Math.max(arr[i], arr[j]);
        else {
            if(dp[i][j]!=-1)return dp[i][j];
            long first = arr[i] + Math.min(ssolve(arr, i + 2, j), ssolve(arr, i + 1, j - 1));
            long last = arr[j] + Math.min(ssolve(arr, i + 1, j - 1), ssolve(arr, i, j - 2));
            dp[i][j] = Math.max(first, last);
            return dp[i][j];
        }
    }
}

