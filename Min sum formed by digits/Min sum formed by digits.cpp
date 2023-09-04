//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // Your code goes here
        priority_queue<long long int,vector<long long int>,greater<long long int>>q;
        
        for(int i=0;i<n;i++){
            q.push(arr[i]);
        }
        
        long long int digit1=0,digit2=0;
        long long int a=0;
        long long int b=0;
        while(!q.empty()){
            
            a=q.top();
            q.pop();
            digit1=digit1*10+a;
            
            
            if(q.size()>0){
                b=q.top();
                q.pop();
                digit2=digit2*10+b;
            }
            
        }
        
        return (digit1+digit2);
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
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends