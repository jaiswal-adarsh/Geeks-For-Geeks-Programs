//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long maximumSum(int n, vector<int> &arr) {
        // code here
        long long ans=0,i=(n-1)/2,j=n/2;
        priority_queue<int>pq;
        if(i==j){
            ans+=arr[i];
            i--;j++;
        }
        while(i>=0){
            pq.push(arr[i--]);
            pq.push(arr[j++]);
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.maximumSum(N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends