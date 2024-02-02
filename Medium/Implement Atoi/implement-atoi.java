//{ Driver Code Starts
//Initial template for JAVA

import java.util.Scanner;

class aToi
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t>0)
		{
			String str = sc.nextLine();
			
			Solution obj = new Solution();
			int num = obj.atoi(str);
			
			System.out.println(num);
		t--;
		}
	}
}
// } Driver Code Ends

class Solution {
    int atoi(String s) {
        int ans = 0;
        boolean isNegative = false;
        int i = 0;
        if (s.length() > 0 && s.charAt(0) == '-') {
            isNegative = true;
            i++;
        }
        for (; i < s.length(); i++) {
            char ele = s.charAt(i);
            if (ele >= '0' && ele <= '9') {
                int digit = ele - '0';
                ans = ans * 10 + digit;
            } else {
                return -1;
            }
        }
        return isNegative ? -ans : ans;
    }
}

