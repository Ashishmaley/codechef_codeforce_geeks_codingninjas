//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            
            String St[] = read.readLine().split(" ");
            
            int N = Integer.parseInt(St[0]);
            int K = Integer.parseInt(St[1]);
            
            String S[] = read.readLine().split(" ");
            
            int[] arr = new int[N];
            
            for(int i=0 ; i<N ; i++)
                arr[i] = Integer.parseInt(S[i]);

            Solution ob = new Solution();
            System.out.println(ob.splitArray(arr,N,K));
        }
    }
}
// } Driver Code Ends


class Solution {
    static long splitArray(int[] arr, int n, int k) {
        long end = 0, start = 0;
        for (int i = 0; i < n; i++) {
            start = Math.max(start, arr[i]);
            end += arr[i];
        }
        long ans = start;
        while (start <= end) {
            long mid = start + (end - start) / 2;
            int a = solveFor(arr, mid);
            if (a > k) {
                start = mid + 1;
            } else {
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
    }

    public static int solveFor(int[] arr, long mid) {
        int ans = 1;
        long sum = 0;
        for (var ele : arr) {
            if (sum + ele > mid) {
                ans++;
                sum = ele;
            } else {
                sum += ele;
            }
        }
        return ans;
    }
}










