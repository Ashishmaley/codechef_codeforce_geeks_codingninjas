//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
		    string str="";
		    solve(s,0,ans,str);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
		void solve(string s,int index,vector<string>& ans,string str){
		    if(index>s.size())return;
		    if(str!=""&&index==s.size())
		    ans.push_back(str);
		    solve(s,index+1,ans,str+s[index]);
		    solve(s,index+1,ans,str);
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends