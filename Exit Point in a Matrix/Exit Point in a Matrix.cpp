//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        // Code here
        vector<int> ans;
        int dr[] = {0, 1, 0, -1, 0};
        int dir = 0, start = 0, end = 0;
        while(start >= 0 && start < n && end >= 0 && end < m){
            ans = {start, end};
            if(matrix[start][end] == 1){
                matrix[start][end] = 0;
                dir = (dir + 1) % 4;
            }
            start = start + dr[dir];
            end = end + dr[dir + 1];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends