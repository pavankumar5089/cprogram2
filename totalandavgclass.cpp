#include<iostream>
using namespace std;
class stud{
	private:
		int i,sno,m1,m2,m3,m4,m5,s;
		float avg;
		char sn[50];
		public:
			void name()
			{
				for(i=0;i<3;i++)
				{
					cout<<"enter a sno";
				cin>> sno;
			
				cout<<"enter sn";
				cin>> sn;
				cout<<"enter telugu";
				cin>> m1;
					cout<<"enter english";
				cin>> m2;
					cout<<"enter math";
				cin>> m3;
					cout<<"enter science";
				cin>> m4;
					cout<<"enter social";
				cin>> m5;
		}
				s=m1+m2+m3+m4+m5;
				avg=s/5;
				cout<<"\nstudent name="<<sn;
				cout<<"\n total marks="<<s;
				cout<<"\navg="<< avg;
			}
};
main()
{
	stud o2;
	o2.name();
	return(0);
}
