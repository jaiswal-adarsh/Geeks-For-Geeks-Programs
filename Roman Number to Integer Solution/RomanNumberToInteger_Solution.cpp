//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        
        map<char,int>m;
        
        m.insert(make_pair('I',1));
        m.insert(make_pair('V',5));
        m.insert(make_pair('X',10));
        m.insert(make_pair('L',50));
        m.insert(make_pair('C',100));
        m.insert(make_pair('D',500));
        m.insert(make_pair('M',1000));
        
        int result=m[str[str.size()-1]];
        
        for(int i=str.size()-2;i>=0;i--)
        {
            if(m[str[i]]<m[str[i+1]])
            {
                result-=m[str[i]];
            }
            else
            {
                result+=m[str[i]];
            }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends