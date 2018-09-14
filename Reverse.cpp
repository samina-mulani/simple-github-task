#include <iostream>
using namespace std;
int main()
{
    int a,r,sum=0;
    cout<<"Enter a number ";
    cin>>a;
    while(a>0)
    {
        r=a%10;
        sum=sum*10+r;
        a/=10;
    }
    cout<<"Reversed number is "<<sum<<endl;
    system("pause");
}
