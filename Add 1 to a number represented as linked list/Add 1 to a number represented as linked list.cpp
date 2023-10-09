//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node* head){
        Node* curr=head,*prev=NULL;
        Node*nxt=NULL;
        
        while(curr!=NULL){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        
        return prev;
        
        
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head=reverse(head);
        
        Node* curr=head,*prev=NULL;
        int carry=0,cnt=1,sum=0;
        
        while(curr!=NULL){
            if(cnt==1){
                cnt++;
                sum=curr->data+1;
            }
            else
               sum=curr->data;
            int d=sum%10;
            curr->data=d;
            carry=sum/10;
            if(carry){
                if(curr->next==NULL){
                    Node* nn=new Node(carry);
                    curr->next=nn;
                    nn->next=NULL;
                    break;
                }
                else{
                    curr->next->data=curr->next->data+carry;
                }
            }
            curr=curr->next;
        }
        
        head=reverse(head);
        
            
        return head;
        
 
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends