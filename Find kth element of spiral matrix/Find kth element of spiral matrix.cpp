//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		
 		int top=0,right=m-1;
 		int bottom=n-1,left=0;
 		int cnt=1;
 		
 		while(top<=bottom && left<=right){
 		//right
 		
         		for(int i=left;i<=right;i++){
         		    if(cnt==k){
         		        return a[top][i];
         		    }
         		    cnt++;
         		}
         		top++;;
         		
         		//bottom
         		
         		for(int i=top;i<=bottom;i++){
         		    if(cnt==k){
         		        return a[i][right];
         		    }
         		    cnt++;
         		}
         		right--;
         		
        //  		left
            if(top<=bottom){
         		for(int i=right;i>=left;i--){
         		    if(cnt==k){
         		        return a[bottom][i];
         		    }
         		    cnt++;
         		}
         		bottom--;}
         		
        //  		top
            if(left<=right){
         		for(int i=bottom;i>=top;i--){
         		    if(cnt==k){
         		        return a[i][left];
         		    }
         		    cnt++;
         		}
         		left++;}
        
    
 		}
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends