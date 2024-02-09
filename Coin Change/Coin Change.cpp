//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        // code here.
        vector<vector<long long int>> dp(N,vector<long long int> (sum+1,0));
        
        for(int i=0;i<N;i++){
            dp[i][0] = 1;
        }
        
        for(int j=0;j<=sum;j++){
            if(j%coins[0]==0){
                dp[0][j] = 1;
            }
            else{
                dp[0][j] = 0;
            }
        }
        
        for(int i=1;i<N;i++){
            for(int j=1;j<=sum;j++){
                
                long long int take=0;
                long long int nottake = 0;
                
                if(j>=coins[i]){
                  take = dp[i][j-coins[i]];
                }
                
                nottake = dp[i-1][j];
                
                dp[i][j] = take + nottake;
            }
        }
        
        return dp[N-1][sum];
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends