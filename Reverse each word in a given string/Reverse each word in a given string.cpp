//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string S)
    {
        //code here.
        int x=0;
        
        for(int i=0;i<=S.size();i++){
            if(S[i]=='.' || i==S.size()){
                int p=i-1;
                
                while(x<p){
                    swap(S[p],S[x]);
                    x++;
                    p--;
                }
                x=i+1;
            }
        }
        return S;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends