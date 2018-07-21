#include<iostream>
using namespace std;
class stud{
	private:
		int bno,q;
		float r,bv,d,t,dv,tv,gv,nv;
	    char sn[50];
     public:
		 void details()
		 {
		 		cout<<"enter a sname";
     		cin>> sn;
		 	cout<<"q";
		 	cin>> q;
		 	cout<<"bno";
		 	cin>> bno;
		 	cout<<"r";
		 	cin>>r;
		 	cout<<"enter a discount";
		 	cin>> d;
		 	cout<<"enter a tax";
		 	cin>> t;
		 	bv=q*r;
		 	dv=bv*d/100;
		 	gv=bv-dv;
		 	tv=gv*5/100;
		 	nv=tv+gv;
		 	cout<<" \nresult of bno="<< bno;
		 	cout<<"\nresult of sname="<<sn;
		 	cout<<"\nresult of net bill value="<<nv;
		 }
		 };
 main()
 {
 	stud o2;
 	o2.details();
 	return(0);
 	
 }
