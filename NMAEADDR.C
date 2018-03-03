#include<stdio.h>
void main ()
{
char name[20];
float height;
char address[30];
int age;
printf("enter name");
scanf("%s",name);
printf("height in inches");
scanf("%f",height);
printf("enter address");
scanf("%s",address);
printf("enter age");
scanf("%d",age);
printf("name is %d",name);
printf("height is %f",height);
printf("add is %s",address);
printf("age is %d",age);
}