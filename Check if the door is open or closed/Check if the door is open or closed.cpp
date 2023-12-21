//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int *checkDoorStatus(int N) {
        // code here
        int *arr=new int[N];
        
        for(int i=1;i<=N;i++){
           for(int j=i;j<=N;j=j+i){
               if(j%i==0){
                    if(arr[j-1])
                        arr[j-1]=0;
                    else
                        arr[j-1]=1;
               }
           }
            
        }
        
        return arr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        int* ptr = ob.checkDoorStatus(N);
        for(int i=0 ; i<N ; i++)
            cout<<ptr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends