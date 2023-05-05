//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

class student
{
    protected :
        int roll_number;
        
    public:
        void set_number(int a)
        {
            roll_number = a;
        }
        
        void display_number()
        {
            cout<<roll_number<<endl;
        }
};


// } Driver Code Ends
//User function Template for C++
class test: public student 
{
    // Add set_marks() method here.
    public:
    double t=0,avg=0;
    void set_marks(float temp[]){
        for(int i=0;i<5;i++)
            t+=temp[i];
        avg=t/5;
    }
};

class result: public test
{
    // Add display() method here.
    public:
   void display(){
       cout<<roll_number<<" "<<t<<" "<<avg;
       cout<<endl;
   }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
    	result student1;
	    int n;
	    cin>>n;
	    student1.set_number(n);
	    float temp[5];
	    int i;
	
	    for(i = 0; i < 5; i++)
	        cin>>temp[i];
	
	    student1.set_marks(temp);
	    student1.display();
	}

	return 0;    
}

// } Driver Code Ends