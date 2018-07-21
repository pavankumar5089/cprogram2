#include<iostream>
using namespace std;
int sum_from_to(int first,int last)
{
	int i,sum=0;
	if(first<=last)
	for(i=first;i<=last;++i)
	sum+=i;
	else
	for(i=first;i>=last;--i)
		sum+=i;
		return sum;
}
int main()
{
int n1=7,n2=4;
cout<<sum_from_to(n1,n2);
system("PAUSE");
//return exit_sucesses;

}
