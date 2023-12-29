//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            int n = Integer.parseInt(br.readLine().trim());
            String[] s = br.readLine().trim().split(" ");
            int[][] Intervals = new int[n][2];
            int j = 0;
            for(int i = 0; i < n; i++){
                Intervals[i][0] = Integer.parseInt(s[j]);
                j++;
                Intervals[i][1] = Integer.parseInt(s[j]);
                j++;
            }
            Solution obj = new Solution();
            int[][] ans = obj.overlappedInterval(Intervals);
            for(int i = 0; i < ans.length; i++){
                for(j = 0; j < ans[i].length; j++){
                    System.out.print(ans[i][j] + " ");
                }
            }
            System.out.println();
        }
    }
}

// } Driver Code Ends


class Solution
{
    public int[][] overlappedInterval(int[][] intervals)
    {
        Arrays.sort(intervals,Comparator.comparingInt(arr -> arr[0]));
     Stack<int[]> s = new Stack<>();
        s.push(intervals[0]);
        

        for (int i = 1; i < intervals.length; i++) {
            int[] arr = s.pop();
            if (arr[1] >= intervals[i][0]) {
                arr[1] = Math.max(arr[1], intervals[i][1]);
                s.push(arr);
            } else {
                s.push(arr);
                s.push(intervals[i]);
            }
        }

        int n = s.size();
        int[][] ans = new int[n][2];
        int i = n - 1; 

        while (!s.isEmpty()) {
            int[] arr = s.pop();
            ans[i--] = arr;
        }

        return ans;
    }
}