#include <iostream>
using namespace std;
void solve()
{
  int n,count=0;cin>>n;
  string s;cin>>s;
  if(s.length()%2 ==1)
  {
     cout<<"no"<<endl;
  }
  else{
  for(int i=0;i<(n/2);i++)
  {
      if(s[i]==s[(n/2)+i])
      count++;
  }
  if(count==(n/2))
  {
      cout<<"yes"<<endl;
  }else
  {
      cout<<"no"<<endl;
  }}
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
