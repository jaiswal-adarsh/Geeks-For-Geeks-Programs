//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
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
/*
// node structure:

struct Node
{
    int data;
    Node* left;
    Node* right;
};

*/



class Solution{

    public:
    int ladoos(Node* root, int home, int k)
    {
        // Your code goes here
         if(!root)return 0;
        queue<Node *> q;
        q.push(root);
        unordered_map<Node *, Node *> parent;
        Node *src;
        while(!q.empty()){
            Node *curr = q.front();
            q.pop();
            if(curr->data == home)src = curr;
            if(curr->left){
                q.push(curr->left);
                parent[curr->left] = curr;
            }
            if(curr->right){
                q.push(curr->right);
                parent[curr->right] = curr;
            }
        }
        int distance = 0;
        q.push(src);
        int sum = 0;
        unordered_map<Node *, bool> vis;
        while(!q.empty() && distance <= k){
            int n = q.size();
            while(n--){
                Node *curr = q.front();
                q.pop();
                vis[curr] = true;
                sum += curr->data;
                if(curr->left && !vis[curr->left])q.push(curr->left);
                if(curr->right && !vis[curr->right])q.push(curr->right);
                if(parent[curr] && !vis[parent[curr]])q.push(parent[curr]);
            }
            distance++;
        }
        return sum;
    }


};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    getchar();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        
        int home,k;
        cin>> home >> k;
        getchar();
        Solution obj;
        cout<< obj.ladoos(root,home,k) << endl;
    }
	return 0;
}


// } Driver Code Ends