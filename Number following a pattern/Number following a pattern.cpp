//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        stack<int>st;
        string ans="";
        int n=S.length();
        int ind=1;
        for(int i=0; i<n; i++){
            st.push(ind);
            ind++;
            if(S[i]=='I'){
                while(!st.empty()){
                    int top=st.top();
                    ans+=(to_string)(top);
                    st.pop();
                }
            }
        }
        st.push(ind);
        while(!st.empty()){
                    int top=st.top();
                    ans+=(to_string)(top);
                    st.pop();
        }
        return ans;
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
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends