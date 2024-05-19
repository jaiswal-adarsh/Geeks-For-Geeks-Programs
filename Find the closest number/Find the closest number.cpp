//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        map<int,int>mp;
        int curr=-1,prev=-1;
        prev=abs(arr[0]-k);
        for (int i=1;i<n;i++){
            curr=abs(arr[i]-k);
            if(curr>prev)
                return arr[i-1];
            prev=curr;
            
        }
        return arr[n-1];
            
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends