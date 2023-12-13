//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll mod = 1e9+7;
	ll countStrings(int n) {
	    // code here
	    ll prev1 = 1;
        ll prev2 = 1;
 
        for (int i = 1; i < n; ++i) {
            ll curr1 = (prev1 + prev2) % mod;
            ll curr2 = prev1;
            prev1 = curr1;
            prev2 = curr2;
        }
 
        return (prev1 + prev2) % mod;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends