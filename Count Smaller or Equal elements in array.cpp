#include<algorithm>

vector < int > countSmallerOrEqual(int * a, int * b, int n, int m) {
    
    //  Initiliazing answer vector arr
    vector < int > arr;
    
    // Sorting the array B
    sort(b, b + m);

    // Traversing the array A
    for (int i = 0; i < n; i++) {
    
        // Handling the case when all elements of array B are smaller
        if (a[i] >= b[m - 1]) {
            arr.push_back(m);
        }

        // Finding the leftmost index having greater value than current element
        // We will convert the iterator returned by upper bound to find the corresponding index 
        // We will append that index to answer vector
        else {
            int idx = upper_bound(b, b + m, a[i]) - b;
            arr.push_back(idx);
        }
    }
    return arr;
}
