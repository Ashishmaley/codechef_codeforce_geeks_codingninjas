
class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	sort(A,A+N);
    	int sum=A[0]+A[N-1];
    	return sum;
    	
    }

};
