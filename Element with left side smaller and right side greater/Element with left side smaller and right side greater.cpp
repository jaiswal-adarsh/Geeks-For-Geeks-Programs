//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    vector<int>v1,v2;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxi=max(arr[i],maxi);
        mini=min(mini,arr[n-1-i]);
        
        v1.push_back(maxi);
        v2.push_back(mini);
    }
    reverse(v2.begin(),v2.end());
    for (int i=1;i<n-1;i++)
    {
        if(v1[i]==v2[i])
        {
            return v1[i];
        }
    }
    return -1;
    
}