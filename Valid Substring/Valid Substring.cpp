//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<int> stak;
        stak.push(-1);
        int ans = 0;
        for(int i=0; i<s.size(); i++){
            int top = stak.top();
            if(top != -1 && s[i] == ')' && s[top] == '('){
                stak.pop();                 //first pop then calculate
                ans = max(ans, i-stak.top());
                //stak.top() : last valid Parentheses kaha tak tha uske just ek phle ki position 
            }
            else{
                stak.push(i);
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
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends