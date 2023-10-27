//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int lps(string &s,string &s2, int start,int end,vector<vector<int>>&dp){
        if(start==0 ||end==0){
            return 0;
        }
        if(dp[start][end]!=-1){
            return dp[start][end];
        }
        if(s[start-1]==s2[end-1]){
            return dp[start][end]= 1+lps(s,s2,start-1,end-1,dp);
        }
        return dp[start][end]=max(lps(s,s2,start-1,end,dp),lps(s,s2,start,end-1,dp));
    }
    
    int minimumNumberOfDeletions(string S) { 
        // code here
        int n=S.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        string s2=S;
        reverse(s2.begin(),s2.end());
        int cnt=lps(S,s2,n,n,dp);
        return(n-cnt);
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends