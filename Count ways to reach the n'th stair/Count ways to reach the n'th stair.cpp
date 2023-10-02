//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int mod=1000000007;
    int solve(int n,int i,vector<int>&dp){
        if(n==i)
            return 1;
        if(n<i)
            return 0;
            
        if (dp[i]!=-1){
            return dp[i];
        }
        dp[i]= (solve(n,i+1,dp)+solve(n,i+2,dp))%mod;
        return dp[i];
    }
    int countWays(int n)
    {
        // your code here
        vector<int>dp(n+1,-1);
        int ans=solve(n,0,dp);
        return ans;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends