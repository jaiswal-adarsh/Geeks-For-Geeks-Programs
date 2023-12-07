//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        long total = 0;
        long runin_tot = 0;
        long runin_les = 0;
        long prev = 0;
        
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= R)
            {
                if (a[i] >= L)
                {
                    runin_les = 0;
                    runin_tot += prev + 1;
                }
                else
                {
                    if (runin_tot > 0) runin_tot += prev - runin_les;
                    if (runin_tot > 0) runin_les++;
                }
                prev++;
            }
            else
            {
                total += runin_tot;
                runin_tot = 0;
                prev = 0;
            }
        }
        
        total += runin_tot;
        return total;
        
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends