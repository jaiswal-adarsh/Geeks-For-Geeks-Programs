//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int splitArray(int arr[] ,int n, int m) {
        // code here
        int start = 0, end = 0;
        for (int i = 0; i < n; i++) {
            start = max(start, arr[i]); 
            end += arr[i]; 
        }
       
        while (start < end) {
            int mid = start + (end - start) / 2;
            
            int sum = 0, pieces = 1;
            for (int i = 0; i < n; i++) {
                if (sum + arr[i] > mid) {
                    sum = arr[i];
                    pieces++;
                } else sum += arr[i];
            }
            if (pieces > m) start = mid + 1; 
            else end = mid; 
        }
        return start;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends