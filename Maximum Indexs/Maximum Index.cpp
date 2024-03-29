//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int n) 
    { 
        // Your code here
        vector<int>L(n,0),R(n,0);
        L[0]=A[0];
        R[n-1]=A[n-1];
        for(int i=1;i<n;i++)
        {
            int j=n-1-i;
            L[i]=min(L[i-1],A[i]);
            R[j]=max(R[j+1],A[j]);
        }
        
        int i=0,j=0,ans=0;
        while(i<n&&j<n)
        {
            if(L[i]<=R[j])
            {
                ans=max(ans,j-i);
                j++;
            }
            else
            {
                i++;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends