//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    long long findNumber(long long N){
        // Code hereif
         long long ans=0;
        long long num=1;
        
        vector<int>v={9,1,3,5,7};
        while(N!=0)
        {
            ans+=v[N%5]*num;
            if(N%5==0)
            {
                N=(N/5)-1;
            }
            else
            {
                N=N/5;
            }
            num=num*10;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.findNumber(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends