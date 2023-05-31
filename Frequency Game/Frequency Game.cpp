//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        
       unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        int maxe=*min_element(arr,arr+n);
    
        for(auto i:m){
            if(i.first>maxe&&i.second<=m[maxe]){
                maxe=i.first;
                
            }
        }
        return maxe;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends