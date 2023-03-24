//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void reverse_dig(int &a,int &b)
{
    //Add your code here.
    int rem1=0,p1=0;
    int rem2=0,p2=0;
    // int x=a,y=b;
    while(a>0){
        rem1=a%10;
        a=a/10;
        p1=p1*10+rem1;
    }

    while(b>0){
        rem2=b%10;
        b=b/10;
        p2=p2*10+rem2;
    }
    a=p1;
    b=p2;
}
void swap(int &a,int &b)
{
    //Add your code here.
    int x=a;
    a=b;
    b=x;
}


//{ Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}
// } Driver Code Ends