//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
        map<int,int>m;
        int val=n+1;
        int res=0;
        for(int i=0;i<n;i++){
            if(m.find(arr[i])!=m.end()){
                
                res=max(res,i-m[arr[i]]+1);
                
            }
            else{
                m[arr[i]]=i+1;
            }
            
        }
        return res;
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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends