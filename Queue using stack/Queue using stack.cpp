//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        while(!input.empty()){
             int val=input.top();
             output.push(val);
             input.pop();
         }
         input.push(x);
         while(!output.empty()){
             int val=output.top();
             input.push(val);
             output.pop();
         }
    }

    int dequeue() {
        if (!input.empty()) {
            int frontElement = input.top();
            input.pop();
            return frontElement;
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
        Queue ob;

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            ob.enqueue(a);
        }
        else if(QueryType==2)
        {
            cout<<ob.dequeue()<<" ";

        }
        }
    cout<<endl;
    }
}

// } Driver Code Ends