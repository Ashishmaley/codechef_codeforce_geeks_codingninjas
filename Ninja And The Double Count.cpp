int doubleCount(int n, vector<int> a) {
    // Write your code here.
    int count=0;
    sort(a.begin(),a.end()); 
    for(int i=0;i<n;i++)
    {int l=a[i]/2;
    for(int j=i;j>=0;j--)
    {
      if (l == a[j]) {
        count++;
        break;
      }
      }
    }
    return count;

}
