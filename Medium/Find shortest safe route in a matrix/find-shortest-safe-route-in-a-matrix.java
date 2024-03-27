//{ Driver Code Starts
import java.io.*;
import java.util.*;

class IntArray {
    public static int[] input(BufferedReader br, int n) throws IOException {
        String[] s = br.readLine().trim().split(" ");
        int[] a = new int[n];
        for (int i = 0; i < n; i++) a[i] = Integer.parseInt(s[i]);

        return a;
    }

    public static void print(int[] a) {
        for (int e : a) System.out.print(e + " ");
        System.out.println();
    }

    public static void print(ArrayList<Integer> a) {
        for (int e : a) System.out.print(e + " ");
        System.out.println();
    }
}

class IntMatrix {
    public static int[][] input(BufferedReader br, int n, int m) throws IOException {
        int[][] mat = new int[n][];

        for (int i = 0; i < n; i++) {
            String[] s = br.readLine().trim().split(" ");
            mat[i] = new int[s.length];
            for (int j = 0; j < s.length; j++) mat[i][j] = Integer.parseInt(s[j]);
        }

        return mat;
    }

    public static void print(int[][] m) {
        for (var a : m) {
            for (int e : a) System.out.print(e + " ");
            System.out.println();
        }
    }

    public static void print(ArrayList<ArrayList<Integer>> m) {
        for (var a : m) {
            for (int e : a) System.out.print(e + " ");
            System.out.println();
        }
    }
}

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while (t-- > 0) {

            int[] a = IntArray.input(br, 2);

            int[][] mat = IntMatrix.input(br, a[0], a[1]);

            Solution obj = new Solution();
            int res = obj.findShortestPath(mat);

            System.out.println(res);
        }
    }
}

// } Driver Code Ends


class Solution {
    static int max =1000000000;
    public static int findShortestPath(int[][] mat) {
        int ans = Math.;
        int n = mat.length;
        int m = mat[0].length;
        boolean[][] visited = new boolean[n][m];
        
        for (int i = 0; i < n; i++) {
            ans = Math.min(solve(i, 0, mat, visited), ans);
        }
        return ans == max ? -1 : ans;
    }

    static int solve(int i, int j, int[][] mat, boolean[][] visited) {
        if(i < 0 || j < 0 || i >= mat.length || j >= mat[0].length 
        || visited[i][j] == true || mat[i][j] == 0 || !isValid(i,j,mat))return max;
        if (j == mat[0].length-1) {
            return 1;
        }
        visited[i][j] = true;
        int right = 1 + solve(i, j + 1, mat, visited);
        int down =1 + solve(i + 1, j, mat, visited);
        int up =1 + solve(i - 1, j, mat, visited);
        visited[i][j] = false;
        return Math.min(Math.min(right,down),up);
    }
    static boolean isValid(int i, int j, int[][] mat){
        if(i-1 >= 0 && mat[i-1][j]== 0)return false;
        if(i+1 < mat.length && mat[i+1][j]==0)return false;
        if(j+1 < mat[0].length && mat[i][j+1]==0)return false;
        if(j-1 >=0 && mat[i][j-1]==0)return false;
        return true;
    }
}

