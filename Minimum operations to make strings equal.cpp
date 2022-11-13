#include <bits/stdc++.h> 

    int minimumOperations(string &a, string &b){

    if (a.size() != b.size())
    {
        return -1;
    }

    // Length of the given string.
    int n = a.size();

    // To store the required answer.
    int count = 0;

    char c1, c2, c3, c4;

    // Run a loop upto 'n'/2.
    for (int i = 0; i < n / 2; i++)
    {

        // Collect the group.
        c1 = a[i];
        c2 = a[n - i - 1];
        c3 = b[i];
        c4 = b[n - i - 1];

        // Cases that doesn't require any preprocessing move.
        if ((c1 == c2 && c3 == c4) || (c1 == c3 && c2 == c4) || (c1 == c4 && c2 == c3))
        {
            continue;
        }

        // Cases that require only one preprocessing move.
        else if (c1 == c3 || c1 == c4 || c2 == c3 || c2 == c4 || c3 == c4)
        {
            count++;
        }

        // All remaining cases require 2 changes.
        else
        {
            count += 2;
        }
    }

    // If 'n' is odd.
    if (n % 2 == 1 && a[n / 2] != b[n / 2])
    {
        count++;
    }

    return count;
}
    
