//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim());
		while(t-->0){
		    System.out.println(new Solution().evaluatePostFix(br.readLine().trim()));
		}
	}
}
// } Driver Code Ends


class Solution
{
    //Function to evaluate a postfix expression.
    public static int evaluatePostFix(String S)
    {
        // Your code here
        Stack<Integer> s=new Stack();
        for(int i = 0; i < S.length(); i++){
            if(Character.isDigit(S.charAt(i))){
                s.push(S.charAt(i) -'0');
            }
            else{
                int num2= s.pop();
                int num1= s.pop();
                s.push(operate(num1,num2,S.charAt(i)));
            }
        }
        return s.peek();
    }
    public static int operate(int num1,int num2,char i){
        if(i=='*')
        return num1*num2;
        else if(i=='/')
        return num1/num2;
        else if(i=='/')
        return num1/num2;
        else if(i=='+')
        return num1+num2;
        else if(i=='-')
        return num1-num2;
        else
            throw new IllegalArgumentException("-1");
    }
}