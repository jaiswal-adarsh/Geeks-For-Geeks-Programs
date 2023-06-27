//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here.
   bool h[ 26 ]{};
    auto i{ s.rbegin() }, j{ i };
    do if ( !h[ *i - 'A' ] && *i != ' ' )
        *j++ = *i, ++h[ *i - 'A' ];
    while ( ++i != s.rend() );
    return { s.rbegin(), j };
    }
    
