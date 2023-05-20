//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    long long countElements(long long arr[], long long n) 
    {
        // Your code goes here
         int i,j;  
         long long c=1;

      for(i=1;i<n;i++)  {

           j=i-1;

            while(j>=0)  {

                if(arr[j]>=arr[i])     {
                    break;  
                    
                }

                 j--;

            } 

        if(j<0)  {  
            c++;
            }

        }

    return c;
    }
};


//{ Driver Code Starts.
int main()
 {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long a[n];
	    for(long long i=0;i<n;i++)
	        cin>>a[i];
	    Solution ob;
	    cout<<ob.countElements(a, n)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends