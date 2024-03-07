//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        // Code here
        sort(arr.begin(),arr.end());
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=N-1;i>=0;i--)
        {
            if(mp.count(arr[i]))
            {
                ans++;
                continue;
            }
            for(int j=0;j<i;j++)
            {
                if(arr[i]%arr[j]==0)
                {
                    ans++;
                    j=i;      //just to break this loop
                    mp[arr[i]]++;
                }
            }
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
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends