//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
public: 
    bool checkSorted(int N, vector<int> A)
    {
        // code here
        int count=0;
        for(int i=0;i<N;i++){
            if(A[i]!=i+1){
                count++;
            }
        }
        if(count==0)
            return true;
        if(count==3)
            return true;
        if(count==4){
          for(int i=0;i<N;i++){
              if(A[i]!=i+1){
                  if(A[A[i]-1]!=i+1)
                        return false;
              }
          }
          return true;
        }
        else
            return false;
        
    }   
};




//{ Driver Code Starts.
int main() 
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for(int i = 0; i < N; i++)
            cin >> A[i];

        Solution ob;
        if(ob.checkSorted(N, A))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    
    return 0;
}  
// } Driver Code Ends