#include <bits/stdc++.h> 

void insert(stack<int>& s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int a=s.top();
    s.pop();
    insert(s,x);
    s.push(a);
}



stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    insert(myStack,x);
    return myStack;
}
