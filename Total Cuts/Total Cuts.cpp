//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        if(A.size()==1) return 0;
        multiset<int> s;
        int max=A[0],min;
        for(int i=1;i<N;i++) { 
            s.insert(A[i]);
    }
    min=*s.begin();
    int sum=0,cnt=0;
    if(min+max>=K) cnt++;
    for(int i=1;i<N-1;i++){
        if(A[i]>max) max=A[i];
        auto itr=s.find(A[i]);
        s.erase(itr);
        min=*s.begin(); 
        sum=min+max;
        if(sum>=K) cnt++;
    }
    return cnt;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends