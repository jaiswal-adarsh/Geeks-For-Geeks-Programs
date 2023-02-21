//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        
        int rem=0,sum=0;
        int m=n;
        
        while(m!=0)
        {
            rem=m%10;
            sum+=rem*rem*rem;
            m=m/10;
        }
        if(sum==n)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends