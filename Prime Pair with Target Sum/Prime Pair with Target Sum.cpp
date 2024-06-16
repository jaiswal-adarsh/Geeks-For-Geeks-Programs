//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  bool isprime(int n){
      if(n==1)
        return false;
      for(int i=2;i<=sqrt(n);i++){
          if(n%i==0)
            return false;
      }
      return true;
  }
    vector<int> getPrimes(int n) {
        // code here
        int i=1,j=n-1;
        while(i<=j){
            if(isprime(i) && isprime(j))
                return {i,j};
            i++;j--;
        }
        return {-1,-1};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends