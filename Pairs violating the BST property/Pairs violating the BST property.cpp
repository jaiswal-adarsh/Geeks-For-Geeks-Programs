//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// A Tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
}

Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User function Template for C++

/*// A Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};*/

class Solution {
  public:
      int my_counter = 0;
    int index=0;
    void merge(int a[], int p, int q, int r){
        int l = q-p+1;
        int a1[l];
        int l2 = r-q;
        int a2[l2];
            
        for(int i = 0;i<l;i++){
            a1[i] = a[i+p];
        }
        for(int i = 0;i<l2;i++){
            a2[i] = a[q+i+1];
        }
        
        int left = 0, right = 0, k = p;
            
        while(left < l && right < l2)
        {
            if(a1[left] <= a2[right]){
                a[k] = a1[left];
                left++;
            }
            else{
                a[k] = a2[right];
                right++;
                my_counter += (l-left); 
            }
            k++;
        }
        while(left < l){
            a[k++] = a1[left++];
        }
        while(right < l2){
            
            a[k++] = a2[right++];
        }
    }
    
    void mergeSort(int a[], int p, int r)
    {
        if(p < r)
        {
            int q = (p+r)/2;
            mergeSort(a, p, q);
            mergeSort(a, q+1, r);
            merge(a, p, q, r);
        }
    }
        
    int inversionCount(int arr[],int N)
    {
        mergeSort(arr,0,N-1);
        int res = my_counter;
        my_counter = 0;
        return res;
    }
    void inOrderStorage(Node *r,int arr[]){
        if(r!=NULL){
            inOrderStorage(r->left,arr);
            
            arr[index++] = r->data;
            
            inOrderStorage(r->right,arr);
        }
    }
    int pairsViolatingBST(int n, Node *root) {
        // your code goes here
         int arr[n];
        inOrderStorage(root,arr);
        return inversionCount(arr,n);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    getchar();

    while (t--) {

        int n;
        cin >> n;
        getchar();

        string inp;
        getline(cin, inp);

        struct Node* root = buildTree(inp);

        Solution ob;
        int ans = ob.pairsViolatingBST(n, root);
        cout << ans << endl;
    }

    return 0;
}
// } Driver Code Ends