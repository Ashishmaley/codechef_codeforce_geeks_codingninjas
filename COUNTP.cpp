#include <iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        count ++;
    }
    if(count%2==1||count==0)
    cout<<"no\n";
    else
    cout<<"yes\n";
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
