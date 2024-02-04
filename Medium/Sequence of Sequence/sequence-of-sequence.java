//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            String input_line[] = read.readLine().trim().split("\\s+");
            int m = Integer.parseInt(input_line[0]);
            int n = Integer.parseInt(input_line[1]);
            
            Solution ob = new Solution();
            System.out.println(ob.numberSequence(m, n));
        }
    }
}

// } Driver Code Ends




class Solution {
    static int[][] dp;

    static int numberSequence(int m, int n) {
        dp = new int[n + 1][m + 1];
        for (int i = 0; i < n + 1; i++) {
            Arrays.fill(dp[i], -1);
        }
        return solve(m, n, 1);
    }

    static int solve(int m, int n, int i) {
        if (n == 0) {
            return 1;
        }
        if (i > m) {
            return 0;
        }
        if (dp[n][i] != -1) {
            return dp[n][i];
        }
        dp[n][i] = solve(m, n - 1, i * 2) + solve(m, n, i + 1);
        return dp[n][i];
    }
}