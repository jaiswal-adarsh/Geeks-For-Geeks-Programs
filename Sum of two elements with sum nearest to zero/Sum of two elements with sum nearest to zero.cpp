//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            sort(arr,arr+n);
            int low=0,high=n-1;
            int dis=INT_MAX;
            int res=INT_MIN;
            while(low<high)
            {
                int sum=arr[low]+arr[high];
                if(abs(sum-0)==dis)
                    res=max(res,sum);
                if(abs(sum-0)<dis)
                {
                    dis=min(dis,abs(sum-0));
                    res=sum;
                }
                if(abs(arr[low])>abs(arr[high]))
                    low++;
                else
                    high--;
            }
            return res;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends