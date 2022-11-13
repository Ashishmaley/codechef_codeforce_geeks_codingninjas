#include <bits/stdc++.h> 
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
    if(str[0]<=122&&str[0]>=97)
    {str[0]=str[0]-32;}
    for(int i=1;i<str.length();i++)
    { 
        
        if(str[i]==32)
            if(str[i+1]<=122&&str[i+1]>=97)
        str[i+1]=str[i+1]-32;}
    return str;
}
