//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	long long int base=0;
	int rem=0;
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    while(n>0){
		    rem=n%10;
		    base=base*10+rem;
		    
		    n/=10;
		        
		    }
		    return base;
		    
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends