//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    public:
    
    int m=1e9+7;

    int Maximize(int a[],int n)
    {
        // Complete the function
         long long int sum =0;

        sort(a, a+n);
        for(long long int i=0; i<n; i++){

            sum = (sum+(a[i]*i))%1000000007;;

        }

        return sum;
        
    
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends