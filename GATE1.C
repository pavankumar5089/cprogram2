#include<stdio.h>
#include<conio.h>
void main()
{
char name[20];
int age;
clrscr();
printf("enter a name");
scanf("%s",name);
printf("enter a age");
scanf("%d",&age);
if(age>=20)
printf("the person is eligable for gate");
else if(age<18)
printf("the person is not eligable for gate");
else
printf("exceptional case: wait for one year");
}
