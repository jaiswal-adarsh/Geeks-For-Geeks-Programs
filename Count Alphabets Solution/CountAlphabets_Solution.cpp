//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int Count(string S);


int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << Count(S) << endl;
    }
return 0;
}


// } Driver Code Ends


int Count(string S){
    //complete the function here
    int count=0;
    for(int i=0;i<S.length();i++)
    {
        if((int(S[i])>=65 &&int(S[i])<=90) ||(int(S[i])>=97&&int(S[i])<=122))
        {
            count++;
        }
    }
    return count;
}