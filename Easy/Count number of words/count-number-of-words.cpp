//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<countWords(s)<<endl;
	    }
}
// } Driver Code Ends


//User function Template for C++

int countWords(string s)
{
    int count=0,n=s.size();
        bool flag=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>=97&&s[i]<=122){
                flag=true;
            }
            else if(i<n && (s[i]==' ' || (i<n-1 && s[i]== '\\' && (s[i+1]=='n'||s[i+1]=='t'))))
            {
                if(flag==true){
                    count++;
                    flag = false;
                }
                if(s[i]=='\\')i++;
            }
            if(i==n-1&&flag==true)count++;
        }
        return count;
}