#include <iostream>
#include <iomanip>
using namespace std;

class book
{
    double bookno, price = 99.75, n, total;
    char bookname[50];

    double cost(int n)
    {
        return price * n;
    }

public:
    double input()
    {
        cout << "Enter Book Number:";
        cin >> bookno;
        cout << "Enter Book Title:";
        cin >> bookname;
        cout << "Enter Number Of Copies:";
        cin >> n;
        total = cost(n);
    }

    double purchase()
    {
        cout << "\nBook Number:" << bookno;
        cout << "\nBook Title:" << bookname;
        cout << "\nNumber Of Copies:" << n;
        cout << "\nTotal Cost:" << setprecision(total + 2) << total;
    }
};

int main()

{
    book a;
    a.input();
    a.purchase();
}