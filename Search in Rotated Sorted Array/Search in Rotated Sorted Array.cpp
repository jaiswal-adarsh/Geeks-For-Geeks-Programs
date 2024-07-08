//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int getpivot(vector<int>& arr,int s, int h)
    {
        int st=s,end=h,mid;
        mid=st+(end-st)/2;
        if(arr[st]<arr[end])
            {
                return st;
            }
        else if(arr[st]>arr[st+1])
        {
            return st+1;
        }
        while(st<end)
        {
            if(arr[mid]>arr[0])
            {
                st=mid+1;
            }
            else
            {
                end=mid;
            }
            mid=st+(end-st)/2;
        }
        return st;
    }
    
    int binsearch(vector<int>& arr,int s, int e, int k)
    {
        int st=s,end=e, t=k,mid;
        mid=st+(end-st)/2;
        while(st<=end)
        {
            if(arr[mid]==t)
            {
                return mid;
            }
            else if(arr[mid]<t)
            {
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=st+(end-st)/2;
        }
        return -1;
    }
    int search(vector<int>& arr, int key) {
        // complete the function here
        int l=0,h=arr.size()-1;
        int pivot=getpivot(arr,l,h);
        
        if(key>=arr[pivot] && key<=arr[h])
        {
            return binsearch(arr,pivot,h,key);
        }
        else
        {
            return binsearch(arr,l,pivot-1,key);
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends