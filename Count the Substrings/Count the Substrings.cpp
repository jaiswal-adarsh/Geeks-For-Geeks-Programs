//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        int n=S.size(),sum=0,cnt=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            int var=-1;
            if(islower(S[i])) var=1;
            sum+=var;
            if(mp.find(sum)!=mp.end()){
                cnt+=mp[sum];
            }
            mp[sum]++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends