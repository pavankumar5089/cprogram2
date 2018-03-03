#include<stdio.h>

struct details{
		char name[10],city[10],emailid[10];
	int age,contact;
}s1;
void main()
{

	printf("enter name");
	scanf("%s",s1.name);
	printf("enter city");
	scanf("%s",s1.city);
	printf("enter emailid");
	scanf("%s",s1.emailid);
	printf("enter age");
	scanf("%d",&s1.age);
	printf("enter contact");
	scanf("%d",&s1.contact);
	printf("details are:name is=%s city=%s emailid=%s age=%d contact=%d",s1.name,s1.city,s1.emailid,s1.age,s1.contact);
}
