//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]){
                m[s[i]]++;
            }
            else{
                m[s[i]]=1;
            }
            
            
        }
        
        for(int i=0;i<m.size();i++){
            if(m[s[i]]>=2)
                return s[i];
        }
        return '#';
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
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}



// } Driver Code Ends