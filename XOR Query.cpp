#include <bits/stdc++.h> 

vector<int> xorQuery(vector<vector<int>> &queries)
{
    // Create an empty array ans
    vector<int>ans;

    // Create a variable flag
    int flag = 0;

    // Iterate over the queries
    // If the query is of type 1 then insert at the back of the array ans (queries[i][1] ^ Val)
    // Otherwise, update the value of the flag as flag ^ queries[i][1]
    for (int i = 0; i < queries.size(); i++)
    {
        if (queries[i][0] == 1)
        {
            ans.push_back(queries[i][1]^flag);
        }
        else
        {
            flag ^= queries[i][1];
        }

    }

    // Iterate through the array ans and for each element in the array update it as ans[i] = ans[i] ^ flag
    for (int i = 0; i < ans.size(); i++)
    {
        ans[i] = ans[i] ^ flag;
    }

    // Return the array ans
    return ans;
}
