//{ Driver Code Starts
import java.io.*;
import java.util.*;


class IntMatrix
{
    public static int[][] input(BufferedReader br, int n, int m) throws IOException
    {
        int[][] mat = new int[n][];

        for(int i = 0; i < n; i++)
        {
            String[] s = br.readLine().trim().split(" ");
            mat[i] = new int[s.length];
            for(int j = 0; j < s.length; j++)
                mat[i][j] = Integer.parseInt(s[j]);
        }

        return mat;
    }

    public static void print(int[][] m)
    {
        for(var a : m)
        {
            for(int e : a)
                System.out.print(e + " ");
            System.out.println();
        }
    }

    public static void print(ArrayList<ArrayList<Integer>> m)
    {
        for(var a : m)
        {
            for(int e : a)
                System.out.print(e + " ");
            System.out.println();
        }
    }
}

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            int n;
            n = Integer.parseInt(br.readLine());
            
            
            int[][] grid = IntMatrix.input(br, n, n);
            
            Solution obj = new Solution();
            int res = obj.largestIsland(n, grid);
            
            System.out.println(res);
            
        }
    }
}

// } Driver Code Ends


class Solution{
    public int largestIsland(int N,int[][] grid) 
    {
        // code here
    final int m = grid.length;
    final int n = grid[0].length;

    int maxSize = 0;    
    List<Integer> sizes = new ArrayList<>(Arrays.asList(0, 0));
    for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j)
        if (grid[i][j] == 1) {
          sizes.add(paint(grid, i, j, sizes.size())); // paint 2, 3, ...
        }

    for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j)
        if (grid[i][j] == 0) {
          Set<Integer> neighborIds =
              new HashSet<>(Arrays.asList(getId(grid, i - 1, j), getId(grid, i + 1, j),
                                          getId(grid, i, j + 1), getId(grid, i, j - 1)));
          maxSize = Math.max(maxSize, 1 + getSize(grid, neighborIds, sizes));
        }

    return maxSize == 0 ? m * n : maxSize;
  }

  private int paint(int[][] grid, int i, int j, int id) {
    if (i < 0 || i == grid.length || j < 0 || j == grid[0].length)
      return 0;
    if (grid[i][j] != 1)
      return 0;

    grid[i][j] = id; 
    return 1 + paint(grid, i + 1, j, id) + paint(grid, i - 1, j, id) +
               paint(grid, i, j + 1, id) + paint(grid, i, j - 1, id);
  }
 
  private int getId(int[][] grid, int i, int j) {
    if (i < 0 || i == grid.length || j < 0 || j == grid[0].length)
      return 0; 
    return grid[i][j];
  }

  private int getSize(int[][] grid, Set<Integer> neighborIds, List<Integer> sizes) {
    int size = 0;
    for (final int neighborId : neighborIds)
      size += sizes.get(neighborId);
    return size;
  }
}
