//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    long long res=0;
	    for(int i=31;i>=0;i--){
	        long long cnt_0=0,cnt_1=0;
	        for(int j=0;j<n;j++){
	            if(((1<<i)&arr[j])>0)
	                cnt_1++;
	           else
	            cnt_0++;
	        }
	        res +=2*(cnt_0*cnt_1);
	    }
	    return res;
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
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends