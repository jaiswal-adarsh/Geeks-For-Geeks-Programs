//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void solve(string s,set<string>&v,int ind){
	        if(ind>s.size()-1){
	            v.insert(s);
	            return;
	        }
	        
	        for(int i=ind;i<s.size();i++){
	            swap(s[ind],s[i]);
	            solve(s,v,ind+1);
	            swap(s[ind],s[i]);
	        }
	    }
	
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string>ans;
		    vector<string>v;
		    solve(S,ans,0);
		    
		    for(auto i:ans){
		        v.push_back(i);}
		    return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends