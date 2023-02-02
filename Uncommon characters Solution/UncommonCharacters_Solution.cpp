//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
           unordered_map<char,int> m1;

        unordered_map<char,int> m2;

        string ans="";

        

        for(int i=0;i<A.length();i++){

            m1[A[i]]++;;

        }

        for(int i=0;i<B.length();i++){

            m2[B[i]]++;

        }

        for(int i=0;i<A.length();i++){

            if(m2[A[i]]==0)

            ans=ans+A[i];

        }

        for(int i=0;i<B.length();i++){

            if(m1[B[i]]==0)

            ans=ans+B[i];

        }

        if(ans.length()==0)

        return "-1";

       sort(ans.begin(),ans.end());

       string res="";

       res=res+ans[0];

       for(int i=1;i<ans.length();i++){

           if(ans[i]!=ans[i-1])

           res=res+ans[i];

       }

        return res;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends