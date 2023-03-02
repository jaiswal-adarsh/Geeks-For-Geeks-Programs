//{ Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}
// } Driver Code Ends


/*Complete the function given below*/
int num(int a[], int n, int k)
{
     //add code here.
     int m=n,cnt=0;
     for(int i=0;i<n;i++){
         int rem=0;
         int t=a[i];
         while(t!=0){
             rem=t%10;
             if(rem==k)
                cnt++;
                
             t=t/10;
         }
     }
     return cnt;
}