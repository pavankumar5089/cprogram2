#include<iostream>
using namespace std;
main()
{
	struct abc
	{
		int rollnum;
	
		
	}; 
	abc s1,s2,t;
	cout<<"enter rollnum:";
	cin>>s1.rollnum;
	t.rollnum=s1.rollnum;
	s2.rollnum=s1.rollnum;
	s1.rollnum=t.rollnum;
	cout<<s2.rollnum;
}
