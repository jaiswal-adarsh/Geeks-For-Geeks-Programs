//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
      int lcs(string x,string y,int n,int m){
          int dp[n+1][m+1];
          memset(dp,-1,sizeof(dp));
          
          for(int i=0;i<n+1;i++){
              for(int j=0;j<m+1;j++){
                  if(i==0 or j==0)dp[i][j]=0;
                  else if(x[i-1]==y[j-1]){
                      dp[i][j]=1+dp[i-1][j-1];
                  }
                  else{
                      dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                  }
              }
          }
          return dp[n][m];
      }
    int findMinCost(string x, string y, int costX, int costY) {
        // Your code goes here
         int res=lcs(x,y,x.length(),y.length());
        
        int ans=((x.length()-res)*costX+(y.length()-res)*costY);
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;

        int costX, costY;
        cin >> costX >> costY;

        Solution ob;
        cout << ob.findMinCost(x, y, costX, costY);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends