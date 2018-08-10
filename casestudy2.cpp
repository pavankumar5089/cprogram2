
#
include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	
	char str[20][20], t[20];
	int i, j;
	cout<<"Enter any 10 string : "<<endl;
	//cin>>str;
	for(i=0; i<10; i++)
	{
		cin>>str[i];
	}
	for(i=1; i<10; i++)
	{
		for(j=1; j<10; j++)
		{
			if(strcmp(str[j-1], str[j])>0)
			{
				strcpy(t, str[j-1]);
				strcpy(str[j-1], str[j]);
				strcpy(str[j], t);
			}
		}
	}
	cout<<"Strings are in sorting order : \n";
	for(i=0; i<10; i++)
	{
		cout<<str[i]<<"\n";
	}
	getch();
}
