//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
        int n=mat.size();
        int m=mat[0].size();
        
        vector<int> ans;
        for(int i=0;i<2*n-1;i++){
            int diff=0;
            if(i>n-1){
                diff=i-n+1;
            }
            if(i%2){
                for(int j=min(i,n-1),k=0+diff;j>=0+diff;j--,k++){
                    ans.push_back(mat[k][j]);
                }
            }
            else{
                for(int j=0+diff,k=min(i,n-1);k>=0+diff;j++,k--){
                    ans.push_back(mat[k][j]);
                }
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends