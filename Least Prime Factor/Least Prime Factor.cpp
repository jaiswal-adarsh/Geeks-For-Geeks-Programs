//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
  int findprime(int x){
      int p=2;
      while(x>0){
          if(x%p==0){
              
              return p;
          }
          else{
              p++;
          }
          
      }
      
  }
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int>v;
        v.push_back(0);
        for(int i=1;i<=n;i++){
            if(i==1){
                v.push_back(i);
            }
            else{
                int p=findprime(i);
                v.push_back(p);
            }
        }
        return v;
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
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends