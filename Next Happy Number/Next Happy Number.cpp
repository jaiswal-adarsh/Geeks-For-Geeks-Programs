//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int sumsq(int n){
        unordered_map<int,int>m;
        while(m.find(n)==m.end()){
            m[n]=1;
            int rem=0,sum=0;
            while(n>0){
                rem=n%10;
                sum=sum+(rem*rem);
                n/=10;
            }
            if(sum==1)
                return 1;
            n=sum;
        }
        return 0;
    }
    int nextHappy(int N){
        // code here
        int flag=1,i=N+1;
        while(flag){
            int tmp=sumsq(i);
            if(tmp)
                return i;
            i++;
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends