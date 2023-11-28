//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    if(n)
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    else cout<< " ";
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        // unordered_map<Node*,int>m;
    
        // Node* curr=head1;
        
        // while(curr){
        //     m[curr]++;
        //     curr=curr->next;
        // }
        
        // Node* head3=NULL;
        // Node* tmp=NULL;
        
        // curr=head2;
        // while(curr){
        //     if(m[curr]){
        //         Node* p=new Node(curr->data);
        //         if(head3==NULL){
        //             head3=p;
        //             tmp=head3;
        //         }
        //         else{
        //             tmp->next=p;
        //             tmp=p;
        //         }

        //     }

        //     curr=curr->next;
        // }

        // return head3;
    Node* curr1 = head1;
    Node* curr2 = head2;
    Node* head3 = nullptr;
    Node* tmp = nullptr;

    while (curr1 && curr2) {
        if (curr1->data == curr2->data) {
            // Found an intersection, create a new node
            Node* newNode = new Node(curr1->data);
            if (!head3) {
                head3 = newNode;
                tmp = newNode;
            } else {
                tmp->next = newNode;
                tmp = newNode;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        } else if (curr1->data < curr2->data) {
            curr1 = curr1->next;
        } else {
            curr2 = curr2->next;
        }
    }

    return head3;
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Solution ob;
	    Node* result = ob.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends