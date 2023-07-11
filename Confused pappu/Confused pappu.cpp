//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
long long findDiff(long long n);

int main(){
    long t;
    cin>>t;
    while(t--){
        long long amount;
        cin>>amount;
        cout<<findDiff(amount)<<endl;
    }
    return 0;
}
// } Driver Code Ends


long long findDiff(long long amount){
    //code
    long long n=amount;
    long long sum=0,mul=1;
    while(n>0){
        int rem=n%10;
        if(rem==6) rem=9;
        sum+=rem*mul;
        mul*=10;
        n/=10;
    }
    return abs(sum-amount);
}