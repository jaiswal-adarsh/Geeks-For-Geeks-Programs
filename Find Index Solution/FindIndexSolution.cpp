//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        vector<int>v;
        int cnt1=0;
        int cnt2=0;
        int i=0;
        int j=n-1;
        
        while(i<=n-1&&j>=0)
        {
            if(a[i]==key && cnt1==0)
            {
                v.push_back(i);
                cnt1++;
            }
            
            if(a[j]==key && cnt2==0)
            {
                v.push_back(j);
                cnt2++;
            }
            
            i++;
            j--;
        }
        if(cnt1==0)
        {
            v.push_back(-1);
        }
        if(cnt2==0)
        {
            v.push_back(-1);
        }
        
        
        sort(v.begin(),v.end());
          
          return v;
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
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends