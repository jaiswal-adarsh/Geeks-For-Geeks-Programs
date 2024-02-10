//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int mx = INT_MIN;
        long long water = 0;
        long long unit =0;
        int index=0;
        for(int i = 0; i<n; i++){
            mx = max(mx, arr[i]);
            if(mx>arr[i]){
                water = water+(mx-arr[i]);
            }
            else{
                index = i;
                unit+=water;
                water = 0;
            }
        }
        water = 0;
        mx = INT_MIN;
        for(int i= n-1; i>=index; i--){
            mx = max(mx, arr[i]);
            if(mx>arr[i]){
                water = water+(mx-arr[i]);
            }
            else{
                unit+=water;
                water = 0;
            }
        }
        return unit;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends