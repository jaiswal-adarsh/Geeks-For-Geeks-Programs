#include <iostream>
#include <queue>

using namespace std;

int main() {
	//code
	int N,T;
	cin>>T;
	while(T!=0)
	{
    	queue <int>q;
    	cin>>N;
    	for(int i=1;i<=N;i++)
    	{
    	    q.push(i);
    	}
    	int j=q.front();
	    while(q.size()!=1)
	    {
	        q.push(j);
	        q.pop();
	        q.pop();
	        
	        
	        j=q.front();
	    }
	    
	    cout<<j<<endl;
	    
	    T--;
	}
	return 0;
}