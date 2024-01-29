//{ Driver Code Starts
//Initial Template for Java

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
            String str = br.readLine().trim();
            Solution ob = new Solution();
            int ans = ob.TotalCount(str);
            System.out.println(ans);           
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution
{
    ArrayList<ArrayList<Integer>> dp;
    public int TotalCount(String str)
    {
        int sum =0;
        int n = str.length();
        for(int i=0;i<n;i++){
            sum+=str.charAt(i)-'0';
        }
        dp =new ArrayList<>();
        for(int i=0;i<n;i++){
            dp.add(new ArrayList<Integer>());
            for(int j=0;j<sum+1;j++){
                dp.get(i).add(-1);
            }
        }
        return solve(str,0,0);
    }
    public int solve(String str,int index,int sum){
        if(index==str.length())return 1;
        if(dp.get(index).get(sum)!=-1)return dp.get(index).get(sum);
        int ans=0,currSum=0;
        for(int i=index; i<str.length();i++){
            currSum+=str.charAt(i)-'0';
            if(currSum>=sum)
            ans+= solve(str,i+1,currSum);
        }
        dp.get(index).set(sum,ans);
        return ans;
    }
}









