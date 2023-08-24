//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string num1, string num2) {
       //Your code here
int sign = 1;

    if (num1[0] == '-') {
        sign *= -1;
    }

    if (num2[0] == '-') {
        sign *= -1;
    }

    std::string abs_num1 = num1[0] == '-' ? num1.substr(1) : num1;
    std::string abs_num2 = num2[0] == '-' ? num2.substr(1) : num2;

    int len1 = abs_num1.size();
    int len2 = abs_num2.size();
    std::string result(len1 + len2, '0');

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int product = (abs_num1[i] - '0') * (abs_num2[j] - '0') + (result[i + j + 1] - '0');
            result[i + j + 1] = (product % 10) + '0';
            result[i + j] += product / 10;
        }
    }

    // Remove leading zeros
    size_t pos = result.find_first_not_of('0');
    if (pos != std::string::npos) {
        return (sign == -1 ? "-" : "") + result.substr(pos);
    }

    return "0";
}

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends