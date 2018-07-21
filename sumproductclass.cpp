#include<iostream>
using namespace std;
class name{
	private:
		int a,b,c,d,s,p;
		float avg;
		public:
			void add()
			{
				cout<<"enter value";
				cin>>a>>b>>c>>d;
				s=a+b+c+d;
				p=a*b*c*d;
				avg=s/4;
				cout<<"\nsum of two num="<<s;
				cout<<"\nproduct="<<p;
				cout<< "\navg="<<avg;
				
			}
			
};
main()
{
	name o1;
	o1.add();
	return(0);
}
