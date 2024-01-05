//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner scan = new Scanner(System.in);
		int test = scan.nextInt();
		
		while(test > 0){
		    String s = scan.next();
		    String t = scan.next();
		    
		    System.out.println(new Solution().smallestWindow(s, t));
		    test--;
		}
	}
}
// } Driver Code Ends


class Solution {
    public static String smallestWindow(String s, String p) {
        int[] arr = { -1, -1 };
        int size = p.length() - 1, minSize = Integer.MAX_VALUE;
        HashMap<Character, Integer> mp = new HashMap<>();
        HashMap<Character, Integer> mp1 = new HashMap<>();
        
        for (int i = 0; i <= size; i++) {
            char ch = p.charAt(i);
            mp.put(ch, mp.getOrDefault(ch, 0) + 1);
        }
        
        int sizee = mp.size();
        int i = 0, j = 0;
        
        while (j < s.length()) {
            char ch = s.charAt(j);
            if (mp.containsKey(ch)) {
                mp1.put(ch, mp1.getOrDefault(ch, 0) + 1);
                
                if (mp1.get(ch).intValue() == mp.get(ch).intValue()) {
                    sizee--;
                }
            }
            
            while (sizee == 0 && i <= j) {
                char cha = s.charAt(i);
                if (minSize > j - i + 1) {
                    arr[0] = i;
                    arr[1] = j;
                    minSize = j - i + 1;
                }
                if (mp1.containsKey(cha)) {
                    mp1.put(cha, mp1.get(cha) - 1);

                    if (mp.containsKey(cha) && mp1.get(cha) < mp.get(cha)) {
                        sizee++;
                    }
                }
                
                i++;
            }
            j++;
        }
        
        return (arr[0] == -1 || arr[1] == -1) ? "-1" : s.substring(arr[0], arr[1] + 1);
    }
    
}