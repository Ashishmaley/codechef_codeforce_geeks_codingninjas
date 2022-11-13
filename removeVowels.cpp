#include <bits/stdc++.h> 
string removeVowels(string s) {
    // Write your code here.
    string ans={""};
   for(int i=0;i<s.size();i++)
   {
       if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='O'&&s[i]!='o'&&s[i]!='u'&&s[i]!='E'&&s[i]!='A'&&s[i]!='I'&&s[i]!='U')
           ans.push_back(s[i]);
       
   }
        return ans;
}
