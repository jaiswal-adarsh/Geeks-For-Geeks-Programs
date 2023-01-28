//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    
	    int s=0,e=n-1,ans;
	    int mid=s+(e-s)/2;
	    if(arr[s]>arr[s+1])
	    {
	        return arr[s];
	    }
	    
	    while(s<e)
	    {
	        if (arr[mid-1]>arr[mid])
	        {
	            e=mid-1;
	        }
	        else
	        {
	            ans=s;
	            s=mid+1;
	        }
	        mid=s+(e-s)/2;
	    }
	    return arr[e];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends