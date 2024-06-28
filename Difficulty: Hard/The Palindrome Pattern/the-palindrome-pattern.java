//{ Driver Code Starts
// Initial Template for Java

// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {

        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));

        Solution ob = new Solution();
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String input_line[] = read.readLine().trim().split("\\s+");
            int n = Integer.parseInt(input_line[0]);
            String input_line1[] = read.readLine().trim().split("\\s+");
            int[][] a = new int[n][n];
            int c = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    a[i][j] = Integer.parseInt(input_line1[c]);
                    c++;
                }
            }
            String ans = ob.pattern(a);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    public String pattern(int[][] arr) {
        for(int i=0;i<arr.length;i++){
            if(check(arr[i])){
                StringBuilder ans = new StringBuilder("");
                ans.append(i);
                ans.append(" ");
                ans.append("R");
                return ans.toString();
            }
        }
        for(int i=0;i<arr.length;i++){
            if(checkColumn(arr,i)){
                StringBuilder ans = new StringBuilder("");
                ans.append(i);
                ans.append(" ");
                ans.append("C");
                return ans.toString();
            }
        }
        return "-1";
        
    }
    boolean checkColumn(int[][] arr,int i){
        int n = arr[0].length;
        for(int j=0;j<n/2;j++){
            if(arr[j][i]!=arr[n-j-1][i])return false;
        }
        return true;
    }
    
    boolean check(int[] arr){
        int n = arr.length;
        for(int j=0;j<n/2;j++){
            if(arr[j]!=arr[n-j-1])return false;
        }
        return true;
    }
}
