//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
long long MOD=1000000007;
    long long sequence(int n){
        // code here
        int M=1;
        long long int ans=0;
        for(int i=1;i<=n;i++){
            int j=i;
            long long temp=1;
            while(j){
                temp=(temp%MOD*M)%MOD;
                M++;
                j--;
            }
            ans+=temp;
        }
        return ans%1000000007;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends