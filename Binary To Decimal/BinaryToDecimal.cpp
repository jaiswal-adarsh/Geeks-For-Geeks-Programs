#include<iostream>
using namespace std;

int decimal(int count)
{
    int mul=1;
    while(count!=0)
    {
        mul=mul*2;
        count--;
    }
    return mul;
}

int main()
{
    int n,rem=0,count=0,sum=0;
    cin>>n;
    
    while (n!=0)
    {
        rem=n%10;
        if(rem==0)
        {
            count++;
        }
        else{
            sum=sum+decimal(count);
            count++;
        }
        n=n/10;
    }
    cout<<"the decimal number is :"<<sum<<endl;


}