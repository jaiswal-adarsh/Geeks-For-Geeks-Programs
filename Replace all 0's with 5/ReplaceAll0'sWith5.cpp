//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int rem=0,m,tmp=1;
    int sum=0;
    m=n;
    
    while(m!=0){
        rem=m%10;
        if(rem==0){
            rem=5;
        }
        sum+=rem*tmp;
        m=m/10;
        tmp*=10;
    }
    return sum;
}