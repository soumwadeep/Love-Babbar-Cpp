#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a<<" Is Largest!";
    }
    else if(b>a && b>c)
    {
        cout<<b<<" Is Largest!";
    }
    else if(c>a && c>b)
    {
        cout<<c<<" Is Largest!";
    }
    else
    {
        cout<<"a,b,c are equal!";
    }
    return 0;
}