//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        
        if(str1.size()!=str2.size())
            return false;
        unordered_map<char,char> a,b;
        for(int i=0;i<str1.size();i++)
        {
            if(a.find(str1[i])!=a.end())
            {
                if(a[str1[i]]!=str2[i])
                    return false;
            }
            if(b.find(str2[i])!=b.end())
            {
                if(b[str2[i]]!=str1[i])
                    return false;
            }
            a[str1[i]]=str2[i];
            b[str2[i]]=str1[i];
        }
        if(a.size()==b.size())
            return true;
        return false;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends