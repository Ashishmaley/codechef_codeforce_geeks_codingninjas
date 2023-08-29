//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    
    Node* reverse(Node *head){
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node* prev=NULL;
        Node* curr=head;
        Node* nexti=NULL;
        while(curr!=NULL){
            nexti=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nexti;
        }
        return prev;
    }
    
    Node *compute(Node *head)
    {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        head = reverse(head);
        Node* ans = new Node(-1);
        int maxi = head->data;
        Node* curr = head;
        Node* prev = ans;

        while (curr != nullptr) {
            if (curr->data >= maxi) {
                prev->next = curr;
                prev = curr;
                maxi = curr->data;
            }
            curr = curr->next;
        }

        prev->next = nullptr; 
        return reverse(ans->next);
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends