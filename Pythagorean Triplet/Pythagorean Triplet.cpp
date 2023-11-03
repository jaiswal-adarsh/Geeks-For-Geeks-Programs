//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    sort(arr, arr+n);
        for(int i=2;i<n;i++){
            int start = 0;
            int end = i-1;
            while(start<end){
                if(pow(arr[start], 2) + pow(arr[end], 2) == pow(arr[i], 2)){
                    return true;
                }
                else if(pow(arr[start], 2) + pow(arr[end], 2) < pow(arr[i], 2)){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
        return false;
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
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends