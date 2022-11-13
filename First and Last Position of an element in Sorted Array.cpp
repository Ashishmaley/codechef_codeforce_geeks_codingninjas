pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
    pair <int,int>pairs;
    pairs.first=-1;
    pairs.second=-1;
	// Write your code here.
    for(unsigned int i=0;i<arr.size();i++)
    {
        if(arr[i]==x&&pairs.first==(-1))
        {
            pairs.first=i;
        }
        if(arr[i]==x&&pairs.first>=(-1))
        {
            pairs.second=i;
        }
    }
    return pairs;
}

