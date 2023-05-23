//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long a , long long b) {
        // code here
       long long lcm;
       long long hcf;
       long long a1,b1;
       a1=a;b1=b; 
       while(a!=0 and b!=0)
       {
        if(a>b)
            a=a%b;
        else
            b=b%a;
       }
       hcf=a==0?b:a;
       lcm=(a1*b1)/hcf;
       return {lcm,hcf};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends