#include <iostream>
using namespace std;
class report
{
    double adno, avg, mark[5], total=0;
    char name[50];

    double getavg()
    {
        for (int i = 1; i <= 5; i++)
        {
            total = total + mark[i];
        }

        return total / 5;
    }

public:
    void read()
    {
        cout << "Enter Admission Number:";
        cin >> adno;
        cout << "Enter Name:";
        cin >> name;

        for (int i = 1; i <= 5; i++)
        {
            cout << "Enter Marks:";
            cin >> mark[i];
        }

        avg = getavg();
    }

    void display()
    {
        cout << "\nAdmission Number:" << adno;
        cout << "\nName:" << name;
        cout << "\nTotal:" << total;
        cout << "\nAverage:" << avg;
    }
};

int main()

{
    report a;
    a.read();
    a.display();
}