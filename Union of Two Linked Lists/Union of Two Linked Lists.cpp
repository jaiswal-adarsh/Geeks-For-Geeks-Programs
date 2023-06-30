//{ Driver Code Starts
#include<bits/stdc++.h>
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


// } Driver Code Ends
/*
// structure of the node is as follows

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
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        
        map<int,int>m;
        struct Node* tmp1=head1;
        struct Node* tmp2=head2;
        
        while(tmp1){
            m[tmp1->data]++;
            tmp1=tmp1->next;
        }
        while(tmp2){
            m[tmp2->data]++;
            tmp2=tmp2->next;
        }
        struct Node* head=NULL;
        struct Node* prev=NULL;
        
        for(auto itr=m.begin();itr!=m.end();itr++){
            if(itr==m.begin()){
                head=(struct Node*)malloc(sizeof(struct Node));
                head->data=itr->first;
                head->next=NULL;
                prev=head;
            }
            else{
                struct Node* curr=(struct Node*)malloc(sizeof(struct Node));
                curr->data=itr->first;
                curr->next=NULL;
                prev->next=curr;
                prev=curr;
            }
        }
        return head;
    }
};


//{ Driver Code Starts.

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


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends