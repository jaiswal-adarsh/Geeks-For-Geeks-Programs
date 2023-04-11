//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        map<int,int>m;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(m[arr[i]]){
                m[arr[i]]+=1;
            }
            else{
                m[arr[i]]=1;
            }
        }
        int p=n/k;
        for(int i=0;i<m.size();i++){
            if(m[i]>p)
                cnt++;
            
        }
    return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends