#include<stdio.h>
#include<iostream>
using namespace std;
class Student
{
    private:
    int admno;
    char sname[20];
    float english,maths,science;
    float total;
    public:
        void Takedata()
        {
            cout<<"Enter the value of admno:";
            cin>>admno;
            cout<<" sname :";
             cin>>sname;
            cout<<"eng :";
             cin>>english;
            cout<<"science:";
             cin>>science;
            cout<<"maths:";
			cin>>maths;
           total=(english+science+maths);

        }
        Student(): total(0.0)  //constructor
        {
        }
        friend float func(Student);
        void Showdata()
        {
            cout<<"adm no:"<<admno;
            cout<<"\nsname:"<<sname;
            cout<<"\neng:"<<english;
            cout<<"\nscience:"<<science;
            cout<<"\nmaths:"<<maths;
            cout<<"\ntotal:"<<total;
        }
};
   float func(Student ct)
   {
    ct.total;
    return ct.total;
   }
   int main()
   {
    Student s1;
    s1.Takedata();
    s1.Showdata();
  //  cout<"\ntotal is:";
   // cout<<func(s1);

   }
