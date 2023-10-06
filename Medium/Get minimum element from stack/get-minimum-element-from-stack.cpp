//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    int min;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(!s.empty())
            return min;
            else return -1;
       }
       
       /*returns poped element from stack*/
       int pop(){
          if(s.empty()) return -1;
          int n = s.top();
          s.pop();
          int l;
          if(n < min){
              l=min;
              min = (min * 2)-n;
              return l;
          }
          return n;
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.empty()){
               min=x;
               s.push(x);
           }
           else if(x>=min)
           {
                s.push(x);
           }else{
               s.push(x+x-min); 
               min=x;
           }
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends