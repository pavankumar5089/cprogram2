#include<iostream>
using namespace std;
int enough (int goal)
{
	int n=1,sum=1,n2;
	while(sum<goal)
	sum+= ++n;
	return n;
}
int main()
{
int n2=9;
cout<<enough(n2);

}
