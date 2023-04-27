//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
bool set(int n){
    while(n){
        int l=n%10;
        if(l==0 || l>5){
            return false;
        }
        n=n/10;
    }
    return true;
}
    int countNumbers(int n) {
        // code here
        int cnt=0;
        while(n){
            if(set(n))
                cnt++;
            n--;
        }
        return cnt;
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
        auto ans = ob.countNumbers(n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends