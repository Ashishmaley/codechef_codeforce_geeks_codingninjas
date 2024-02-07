//{ Driver Code Starts
import java.util.Scanner;
import java.math.*;

// Node Class
class Node {
    int data;
    Node next;

    Node(int val) {
        data = val;
        next = null;
    }
}

// Linked List Class
class LinkedList {
    Node head;
    Node tail;

    LinkedList() {
        head = null;
        tail = null;
    }

    // creates a new node with given value and appends it at the end of the linked list
    void insert(int val) {
        if (head == null) {
            head = new Node(val);
            tail = head;
        } else {
            tail.next = new Node(val);
            tail = tail.next;
        }
    }
}


public class Main {
    static void printList(Node n) 
    {
        while (n != null) {
            System.out.print(n.data);
            n = n.next;
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; ++i) {
            int n = sc.nextInt();
            LinkedList LL1 = new LinkedList();
            String l1 = sc.next();
            for (int j = 0; j < n; ++j) {
                int x = Character.getNumericValue(l1.charAt(j));
                LL1.insert(x);
            }

            int m = sc.nextInt();
            LinkedList LL2 = new LinkedList();
            String l2 = sc.next();
            for (int j = 0; j < m; ++j) {
                int x = Character.getNumericValue(l2.charAt(j));
                LL2.insert(x);
            }

            Solution ob = new Solution();
            Node res = ob.subLinkedList(LL1.head, LL2.head);
            printList(res);
        }
    }
}

// } Driver Code Ends


/*

Definition for singly Link List Node
class Node
{
    int data;
    Node next;

    Node(int x){
        data = x;
        next = null;
    }
}

You can also use the following for printing the link list.
Node.printList(Node node);
*/

class Solution {
    public Node subLinkedList(Node head1, Node head2) {
        // code here
        int counta = 0;
        int countb = 0;
        
        BigInteger h1 = linkedListToBigInteger(head1);
        BigInteger h2 = linkedListToBigInteger(head2);
        
        Node prev = null;
        Node curr = head1;
        
        while(curr!=null&&curr.data==0)curr=curr.next;
        while(curr!=null){
            Node next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        head1=prev;
        
        prev = null;
        curr = head2;
        while(curr!=null&&curr.data==0)curr=curr.next;
        while(curr!=null){
            Node next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        head2=prev;
        
        Node a = null;
        Node b = null;
        int comparisonResult= h1.compareTo(h2);
        if (comparisonResult >= 0) {
            a = head1;
            b = head2;
        } else if (comparisonResult < 0) {
            a = head2;
            b = head1;
        } 
        Node result = null;
        Node resultTail = null;
        int borrow = 0;

        while (a != null) {
            int diff = a.data - (b != null ? b.data : 0) + borrow;

            if (diff < 0) {
                diff += 10;
                borrow = -1;
            } else {
                borrow = 0;
            }

            Node newNode = new Node(diff);

            if (result == null) {
                result = newNode;
                resultTail = newNode;
            } else {
                resultTail.next = newNode;
                resultTail = newNode;
            }

            if (a != null) {
                a = a.next;
            }

            if (b != null) {
                b = b.next;
            }
        }
        curr = result;
        prev=null;
        while(curr!=null){
            Node next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        result=prev;
        while(prev!=null&&prev.data==0)prev=prev.next;
        if(prev==null)return new Node(0);
        return prev;
    }
    public BigInteger linkedListToBigInteger(Node head) {
        StringBuilder sb = new StringBuilder();
        while (head != null) {
            sb.append(head.data);
            head = head.next;
        }
        return new BigInteger(sb.toString());
    }
    
}
        
