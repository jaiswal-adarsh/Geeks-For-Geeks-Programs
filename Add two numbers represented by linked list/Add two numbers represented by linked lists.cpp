//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    //Function to add two numbers represented by linked list.
   Node* reverse(Node* head)
    {
        Node* prev=NULL;
        Node* curr=head;
        Node* temp=curr->next;
        while(curr!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=temp;
            if(temp!=NULL)
                 temp=temp->next;
        }
        return prev;
    }
    Node *insertTail(Node **s, int data) {
       
     Node* n=new Node(data);
      n->next=*s;
      *s=n;
      return n;
    }
    Node* add(Node* first,Node* second)
    {
        Node* head=NULL;
        int carry=0;
        while(first!=NULL && second!=NULL)
        {
            int sum=carry+first->data+second->data;
            int digit=sum%10;
            insertTail(&head,digit);
            carry=sum/10;
            first=first->next;
            second=second->next;
        }
        while(first!=NULL)
        {
            int sum=carry+first->data;
            int digit=sum%10;
            insertTail(&head,digit);
            carry=sum/10;
            first=first->next;
        }
        while(second!=NULL)
        {
            int sum=carry+second->data;
            int digit=sum%10;
            insertTail(&head,digit);
            carry=sum/10;
            second=second->next;
        }
        while(carry!=0)
        {
            int sum=carry;
            int digit=sum%10;
            insertTail(&head,digit);
            carry=sum/10;
        }
        return head;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        //reverse both lists
        first=reverse(first);
        second=reverse(second);
        
        //add both the lists
        Node* ans=add(first,second);
        while(ans->next!=NULL){
            if (ans->data){
                break;
             }
            ans=ans->next;
        }
        
        
        //reverse ans list;
        //ans=reverse(ans);
        
        return ans;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends