//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int start = 0, maxLength = 1, len = S.length();
        
        auto expandAroundCenter = [&](int left, int right) {
            while (left >= 0 && right < len && S[left] == S[right]) {
                if (right - left + 1 > maxLength) {
                    start = left;
                    maxLength = right - left + 1;
                }
                left--;
                right++;
            }
        };

        for (int i = 0; i < len; ++i) {
            expandAroundCenter(i, i);
            
            expandAroundCenter(i, i + 1);
        }

        return S.substr(start, maxLength);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends