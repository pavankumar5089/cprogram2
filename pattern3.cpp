#include<iostream>
using namespace std;
int main()
{
int n,i,j,k,l,m;
cout<<"enter ramnge:";
cin>>n;
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)	
	{
		cout<<j;
	}
	for(k=i+1;k<=n;k++)
	{
		cout<<"_";
	}
	for(l=n;l>i-1;l--)
	{
		cout<<"_";
	}
	for(m=i;m>=1;m--)
	{
		cout<<m;
	}
	cout<<endl;
} 
//secound
for(i=n-1;i>=1;i--)
{
	for(j=1;j<=i;j++)
	{
		cout<<j;
	}
	for(k=i;k<=n-1;k++)
	{
		cout<<"_";
	}
	for(l=i-1;l<=n-1;l++)
	{
		cout<<"_";
	}
	for(m=i;m>=1;m--)
	{
		cout<<m;
	}
	cout<<endl;
}
}


