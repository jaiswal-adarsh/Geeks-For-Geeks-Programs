//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& mat) {
        // Code here
        int ans=0,m=mat.size(),n=mat[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int c=0;
                if(mat[i][j]){
                    if(i+1 !=m and j+1 !=n and !mat[i+1][j+1]) 
                        c++;
                    if(i and j and !mat[i-1][j-1]) 
                        c++;
                    if(i+1 !=m and j and !mat[i+1][j-1])
                        c++;
                    if(i and j+1 !=n and !mat[i-1][j+1]) 
                        c++;
                    if(j+1 !=n and !mat[i][j+1]) 
                        c++;
                    if(i+1 !=m and !mat[i+1][j]) 
                        c++;
                    if(i and !mat[i-1][j]) 
                        c++;
                    if(j and !mat[i][j-1]) 
                        c++;
                    if(c and !(c%2)) 
                        ans++;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends