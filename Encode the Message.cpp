#include <bits/stdc++.h> 
string encode(string &message)
{
    string ans={""};
    //   Write your code here.
    char currchar;
        int chf=1 ;
    for (int i=0;i<message.size();i++)
    {
        currchar=message[i];
        if(currchar==message[i+1])
        {
          chf++;
        }
        else{
            ans.push_back(currchar);
            ans.append(to_string(chf));
            chf=1;
        }
    }
    return ans;
}
