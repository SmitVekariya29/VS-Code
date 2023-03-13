#include <iostream>
#include <iomanip>
using namespace std;

class result
{

    int m, s, e, t, g;
    float per;
    
    public:
    void subject()
    {
        cout << "Enter  Maths=";
        cin >> m;
        cout << "Enter  Science=";
        cin >> s;
        cout << "Enter  English=";
        cin >> e;
        t = s + m + e;
        per = (float)t / 3;
        

        
    }

    void sum()
    {
        cout << "Maths\tSci.\tEng.\tTotal\tPer\tGrade";
        cout << "\n"<< m << "\t" << s << "\t" << e << "\t" << t;

        if (m < 33 || s < 33 || e < 33)
            cout << "\t --";
        else
            cout << "\t" <<setprecision(4) <<per;
            

        if (m < 33 || s < 33 || e < 33)
            cout << "\t Fail";

        else if (per > 80)
            cout << "\t A";

        else if (per > 70)
            cout << "\t B";

        else if (per > 33)
            cout << "\t C";
    }
};

int main()
{
    result a;

    a.subject();
    a.sum();
}
