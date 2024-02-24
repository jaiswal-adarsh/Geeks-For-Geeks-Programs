//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
        if(n==0 || n==1)
            return n;
        
        int a = (int)maxSum(n/2);
        int b =(int)maxSum(n/3);
        int c =(int)maxSum(n/4);
        int ans =(a+b+c);
        
        return max(ans,n);
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends