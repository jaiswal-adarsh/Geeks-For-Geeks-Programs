//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int sum2=0,sum1=0;
       int s=0,e=n-1;
       int res=0;
       
       while(s<=((n/2)-1),e>=(n/2)){
           sum1+=a[s];
           sum2+=a[e];
           s++;
           e--;
       }
       if(sum1>sum2)
            res=sum1-sum2;
        else
            res=sum2-sum1;
            
        return res;
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends