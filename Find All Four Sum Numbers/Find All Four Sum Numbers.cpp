//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int X) {
        // Your code goes here
        vector<vector<int> > ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int newX=X-arr[i]-arr[j];
                int start=j+1,end=n-1;
                
                while(start<end){
                   int sum=arr[start]+arr[end];
                   int tempStartVal=arr[start];
                   int tempEndVal=arr[end];
                   
                   if(sum>newX) end--;
                   else if(sum<newX) start++;
                   else {
                      ans.push_back({arr[i],arr[j],arr[start],arr[end]});
                      while(start<end && arr[start]== tempStartVal) start++;
                      while(start<end && arr[end]==tempEndVal) end--;
                    }
                 }
                while(j+1<n && arr[j+1]==arr[j]) j++;
            }
            while(i+1<n && arr[i+1]==arr[i]) i++;
        }
         return ans;    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends