//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int>m;
		    string s;
		    int p=0;
		    
		    
		    for(int i=0;i<A.size();i++){
		        m[A[i]]++;
		        int flag=0;
		        for(int j=p;j<=i;j++){
		            if(m[A[j]]<2){
		                s.push_back(A[j]);
		                flag=1;
		                break;
		            }
		            else{
		                p=j+1;
		            }
		        }
		        if(flag==0){
		            s.push_back('#');
		        }
		        
		    }
		    return s;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends