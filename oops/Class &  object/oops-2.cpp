#include <iostream>

#include <iomanip>
using namespace std;

class batsman
{

    double bcode, innings, notout, runs, batavg;
    char bname[50];


    double calavg()
    {
        return runs / (innings - notout);
    }

public:
    int readdata()
    {
        cout << "Enter Batsman code:";
        cin >> bcode;
        cout << "Enter Batsman name:";
        cin >> bname;
        cout << "Enter Innings:";
        cin >> innings;
        cout << "Enter Notout:";
        cin >> notout;
        cout << "Enter Runs:";
        cin >> runs;

        batavg = calavg();
    }

    int displaydata()

    {
        cout << "\nBatsman code:" << bcode;
        cout << "\nBatsman name:" << bname;
        cout << "\nInnings:" << innings;
        cout << "\nNotout:" << notout;
        cout << "\nRuns:" << runs;
        cout << "\nBatting Average:" << setprecision(4) << batavg;
    }
};

int main()
{
    batsman a;
    a.readdata();
    a.displaydata();
}
