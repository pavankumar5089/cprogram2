#include<stdio.h>
#include<conio.h>
void main()
{
int roll;
int age;
char name[10];
char job[10];
char address[10];
char email[25];
clrscr();
printf("enter the roll,age,name,job,address,email");
scanf("%d%d%s%s%s%s",&roll,&age,&name,&job,&address,&email);
printf("roll:%d\nage:%d\nname:%s\njob:%s\naddress:%s\nemail:%s\n",roll,age,name,job,address,email);
}