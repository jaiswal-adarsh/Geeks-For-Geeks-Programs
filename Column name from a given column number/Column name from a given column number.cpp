//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        unordered_map<int,char>umap;
        umap[0] = 'Z';
        char ch = 'A';
        for(int i=1; i<=25; i++){
            umap[i] = ch;
            ch++;
        }
        string result = "";
        while(n!=0){
            int x = n%26;
            if(x == 0){
                result = umap[x] + result;
                n = (n / 26)-1;
            }else{
                result = umap[x] + result;
                n = n / 26;
            }
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends