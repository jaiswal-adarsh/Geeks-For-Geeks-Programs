//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void solve(int ind,int target,int cnt,int arr[],vector<vector<int>> &ans,  vector<int> &ds)
  {
      if(cnt==0)
      {
          if(target==0)
          {
              ans.push_back(ds);
              return;
          }
      }
      for(int i=ind;i<9;i++)
      {
         if(arr[i]>target) break;
         ds.push_back(arr[i]);
         solve(i+1,target-arr[i],cnt-1,arr,ans,ds);
         ds.pop_back();
      }
  }
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        vector<vector<int>> ans;
        vector<int> ds;
        int arr[9] = {1,2,3,4,5,6,7,8,9};
        solve(0,N,K,arr,ans,ds);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends