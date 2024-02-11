//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    vector<int> recamanSequence(int n){
        // code here
        unordered_map<int,int>mp;
        vector<int>arr(n);
        arr[0]=0;
        mp[arr[0]]++;
        for(int i=1;i<n;i++){
            int val=arr[i-1]-i;
            if(val<0 || mp[val]){
                arr[i]=arr[i-1]+i;
                mp[arr[i]]++;
            }
            else{
                arr[i]=val;
                mp[arr[i]]++;
            }
        }
        return arr;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends