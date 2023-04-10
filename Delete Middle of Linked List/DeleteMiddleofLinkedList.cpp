

/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    // Your Code Here
    int cnt=0,mid;
    Node *temp=head;
    while (temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    Node* prev=NULL;
    Node* Next=head->next;
    temp=head;
    if(cnt%2==0)
       mid=(cnt/2)+1;
    else
        mid=(cnt+1)/2;
    cnt=1;
    while(cnt!=mid){
        prev=temp;
        temp=temp->next;
        Next=Next->next;
        cnt++;
    }
    prev->next=Next;
    temp=NULL;
    delete(temp);
    return head;
    
}