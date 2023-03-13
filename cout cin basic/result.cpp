#include<iostream>
using namespace std;
int main()
{
    int s,m,e;

    cout<<"Enter Science mark:";
    cin>>s;

    cout<<"Enter Maths mark:";
    cin>>m;

    cout<<"Enter English mark:";
     cin>>e;

    cout<<"\nTotal marks:"<<s+m+e;
    cout<<"\nPercentage:"<<(float)(s+m+e)/3;

}