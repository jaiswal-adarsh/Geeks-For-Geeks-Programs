//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
        vector<int>pos;
        vector<int>neg,temp;
        int i=0,j=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0)
	            neg.push_back(arr[i]);
	        else
	            pos.push_back(arr[i]);
	    }
	    
	    while(i<neg.size() && j<pos.size()){
	        temp.push_back(pos[i++]);
	        temp.push_back(neg[j++]);
	    }
	    while(i<pos.size()){
	        temp.push_back(pos[i++]);
	    }
	    while(j<neg.size()){
	        temp.push_back(neg[j++]);
	    }
	    for(int i=0;i<n;i++){
	        arr[i]=temp[i];
	    }
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
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends