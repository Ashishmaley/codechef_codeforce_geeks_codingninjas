//{ Driver Code Starts
//Initial Template for JAVA

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(read.readLine());
            
            String S[] = read.readLine().split(" ");
            
            ArrayList<Integer> arr = new ArrayList<>();
            
            for(int i=0; i<n; i++)
                arr.add(Integer.parseInt(S[i]));

            Solution ob = new Solution();
            ArrayList<ArrayList<Integer>> res = ob.uniquePerms(arr,n);
            for(int i=0; i<res.size(); i++)
            {
                for(int j=0; j<n; j++)
                {
                    System.out.print(res.get(i).get(j) + " ");
                }
                System.out.println();
            }
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    static ArrayList<ArrayList<Integer>> uniquePerms(ArrayList<Integer> arr , int n) {
        // code here
        Collections.sort(arr);
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
        ArrayList<Integer> curr = new ArrayList<>();
        boolean[] visited = new boolean[n]; 
        solve(arr,n,0,ans,curr,visited);
        return ans;
    }
    static void solve(ArrayList<Integer> arr,int n,int index,ArrayList<ArrayList<Integer>> ans,ArrayList<Integer> curr,boolean[] visited)
    {
        if(index>n)return;
        if(index==n){
            ans.add(new ArrayList<>(curr));
            return;
        }
        for(int i=0;i<n;i++){
             if (visited[i] || (i > 0 && arr.get(i).equals(arr.get(i - 1)) && !visited[i - 1])) {
                continue;}
                visited[i]=true;
                curr.add(arr.get(i));
                solve(arr,n,index+1,ans,curr,visited);
                visited[i]=false;
                curr.remove(curr.size()-1);
        }
    }
};    
    