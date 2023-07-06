//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *a, int n, int k)
    {
      vector<int>v;
        int maxi=INT_MIN;
        for(int i=0;i<k;i++){
           maxi=max(maxi,a[i]);
        }
        v.push_back(maxi);
        int l=0;
      for(int i=k;i<n;i++){
          if(a[l]==maxi){
              maxi=a[i];
              for(int j=l+1;j<l+k;j++){
                  maxi=max(maxi,a[j]);
              }
              v.push_back(maxi);
          }
          else{
              maxi=max(maxi,a[i]);
              v.push_back(maxi);
          }
          l++;
          
      }
      return v;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends