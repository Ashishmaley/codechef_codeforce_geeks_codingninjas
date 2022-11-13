#include <bits/stdc++.h> 
int minimumParentheses(string p) {
    // Write your code here.
    // pattern is the given string.
    int count=0;
     int c=0,o=0;
    for(int i=0;i<p.size();i++)
    {
       
        if(p[i]=='(')
            o++;
        else
            c++;
        if(c>o)
        {
            count+=(c-o);
            c=0;
            o=0;
        }}
     count+=(o-c);   
    return count;
}
