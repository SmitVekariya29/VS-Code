#include<iostream>
using namespace std;
 
 class student
 {
        int admno;
        char sname[20];
        float eng,maths,science;
        float total;

    int ctotal()
    {
       return eng+maths+science;
        
    }

public:

    int takedata()
    {
        cout<<"Enter Admission Number:";  cin>>admno;
        cout<<"Enter Student Name:";      cin>>sname;
        cout<<"Enter Engllish Mark:";     cin>>eng;   
        cout<<"Enter Maths Mark:";        cin>>maths; 
        cout<<"Enter Science Mark:";      cin>>science;  

        total= ctotal();
    }

    int showdata()
    {
            cout<<"\nAdmission Number:"<<admno;
            cout<<"\nStudent Name:"<<sname;  
            cout<<"\nEngllish Mark:"<<eng;   
            cout<<"\nMaths Mark:"<<maths;
            cout<<"\nScience Mark:"<<science;
            cout<<"\nTotal  marks:"<<total;
    }
 };

 int main()

 {
        student a;
        a.takedata();
        a.showdata();

 }