#include <iostream>
#include <string.h>
using namespace std;
class test
{
    int testcode, nocandidate, centerreqd;
    string description;
    int CALCNTR()
    {
        return nocandidate / 100 + 1;
    }

public:
    int SCHEDULE()
    {
        cout << "Enter Testcode:";
        cin >> testcode;
        cout << "Enter Description:";
        cin >> description;
        cout << "Enter Number of Candidate:";
        cin >> nocandidate;
        centerreqd  = CALCNTR();
    }

    int DISPTEST()
    {
        cout << "\nTestcode:"<<testcode;
        cout << "\nDescription:"<<description;
        cout << "\nNumber of Candidate:"<<nocandidate;
        cout << "\nCenter reqd:"<<centerreqd;
    }
};

int main()
{
    test a;
    a.SCHEDULE();
    a.DISPTEST();
}
