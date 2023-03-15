#include <iostream>
#include <string.h>
using namespace std;

class flight
{

    string destination;
    double distance, fuel, flightno;

    double calfuel()
    {
        if (distance <= 1000)
            fuel = 500;

        else if (distance > 1000 || distance <= 2000)
            fuel = 1100;

        else
            fuel = 2200;
    }

public:
    double feedinfo()
    {
        cout << "Enter Flight Number:";
        cin >> flightno;
        cout << "Enter Destinaton:";
        cin >> destination;
        cout << "Enter Distannce:";
        cin >> distance;
        calfuel();
    }

    double showinfo()
    {
        cout << "\nFlight Number:" << flightno;
        cout << "\nDestination:" << destination;
        cout << "\nDistance:" << distance;
        cout << "\nFuel:" << fuel;
    }
};

int main()
{
    flight a;
    a.feedinfo();
    a.showinfo();
}