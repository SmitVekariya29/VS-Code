#include<iostream>
using namespace std;

class test
{
   int n;
   public:
   void setn(int x)
   {
        n=x;
   }
   void getn()
   {
        cout<<"Value of n:"<<n;
   }
};

int main()
{
    test a;
    a.setn(30);
    a.getn();

}