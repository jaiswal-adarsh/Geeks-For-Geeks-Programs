//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int x=0,y=0;
        for(auto i:mp){
            if(i.first %2==0 && i.second %2==0)
                x++;
            else if(i.first%2!=0 && i.second%2!=0)
                y++;
        }
        if((x+y)&1){
            return "ODD";
        }
        else{
            return "EVEN";
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends