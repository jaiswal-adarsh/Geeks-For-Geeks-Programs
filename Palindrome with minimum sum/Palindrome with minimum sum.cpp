//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        // code here
        int n = s.size(),ans=0;
        char pre='@';
        for(int i=0;i<n;i++){
            if((s[i]!='?' && s[n-1-i]!='?') && s[i]!=s[n-1-i])
                return -1;
        }
        for(int i=0;i<n/2;i++){
            if(pre!='@'){
                if(s[i]!='?'){
                    ans+=abs(s[i]-pre);
                    pre=s[i];
                }
                else if(s[n-1-i]!='?'){
                    ans+=abs(s[n-1-i]-pre);
                    pre=s[n-1-i];
                } 
            }
            else{
                if(s[i]!='?') pre=s[i];
                else if(s[n-1-i]!='?') pre=s[n-1-i];
                else continue;
            }
            
        }
      return 2*ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends