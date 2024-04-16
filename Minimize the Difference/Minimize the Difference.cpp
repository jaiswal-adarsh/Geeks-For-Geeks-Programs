//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        vector<int>pmx(n,0);
        vector<int>pmn(n,0);
        pmx[n-1]=arr[n-1];
        pmn[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            pmx[i]=max(arr[i],pmx[i+1]);
            pmn[i]=min(arr[i],pmn[i+1]);
        }
        int ans=pmx[k]-pmn[k];
        int mx=arr[0],mn=arr[0];
        for(int i=1;i<n-k;i++){
            ans=min(ans,max(pmx[i+k],mx)-min(pmn[i+k],mn));
            mx=max(arr[i],mx);
            mn=min(arr[i],mn);
        }
        ans=min(ans,mx-mn);
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.minimizeDifference(n, k, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends