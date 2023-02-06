#include <iostream>

using namespace std;

class insertion
{
    int i,pos,x;
    int arr[1000]={0};
    int n;
    public:
    void getvalue()
    {
        cout<<"enter the size of array: ";
        cin>>n;
        cout<<"enter the elements in the array :";
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<"enter the elemet to be inserted :";
        cin>>x;
        cout<<"enter the postion where you want to insert : ";
        cin>>pos;
    }
    void insert()
    {
        if(pos>n){
            cout<<"positon is greater than array size !!"<<endl;
            return ;
        }
        if(pos<0)
        {
            cout<<"please enter only positive position value !!"<<endl;
            return;
        }
        
        n++;
        for (i = n - 1; i >= pos; i--){
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = x;
        
    }
    void show()
    {
        cout<<"the resultant array is :";
        for (i = 0; i < n; i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
    
    }
};

int main()
{
    insertion a;
    a.getvalue();
    a.insert();
    a.show();
    

    return 0;
}
