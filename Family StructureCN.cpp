import java.util.*;
public class Solution {
	public static String kthChildNthGeneration(int n, long k) {
		// Write your code here
        //base condition
        if(n==1||k==1)
        {
            return "Male";
        }
        //as we know how to find parent node in tree
        long par=(k+1)/2;
       String pargender= kthChildNthGeneration(n-1,par);
        //if it is first chiled it is same as parent
        if(k==2*par-1)
        {
            return pargender;
        }
        //for second child 
        else if(pargender=="Male")
        {
            return"Female";
        }
        else{
            return "Male";}
        
	}

}
