//{ Driver Code Starts
import java.util.*;

class Check_IsToepliz {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T > 0) {
            int N = sc.nextInt();
            int M = sc.nextInt();
            int arr[][] = new int[N][M];
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) arr[i][j] = sc.nextInt();
            }

            Solution g = new Solution();
            boolean b = g.isToeplitz(arr);

            if (b == true)
                System.out.println("true");
            else
                System.out.println("false");

            T--;
        }
    }
}
// } Driver Code Ends

class Solution {
  public boolean isToeplitz(int[][] mat) {
    int m = mat.length;
    int n = mat[0].length;

    for (int j = 0; j < n; j++) {
      int val = mat[0][j];
      int row = 0, col = j;
      while (row < m && col < n) {
        if (mat[row][col] != val) {
          return false;
        }
        row++;
        col++;
      }
    }

    for (int i = 1; i < m; i++) {
      int val = mat[i][0];
      int row = i, col = 0;
      while (row < m && col < n) {
        if (mat[row][col] != val) {
          return false;
        }
        row++;
        col++;
      }
    }

    return true;
  }
}






//  6  4  6 7 3 0 0
// 10  6  4 6 7 3 0
//  2 10  6 4 6 7 3
//  3  2 10 6 4 6 7