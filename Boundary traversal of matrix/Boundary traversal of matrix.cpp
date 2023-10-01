//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>v;
        int top=0,left=0,right=m-1,bottom=n-1;
        
        if(n==1 || m==1){
            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++)
                    v.push_back(matrix[i][j]);
            
            return v;
        }
        
        //horizontal
        for(int j=0;j<right;j++)
            v.push_back(matrix[top][j]);
                
        for(int i=0;i<bottom;i++)
            v.push_back(matrix[i][right]);
            
        for(int i=right;i>0;i--)
            v.push_back(matrix[bottom][i]);
        
        for(int i=bottom;i>top;i--)
            v.push_back(matrix[i][left]);
            
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends