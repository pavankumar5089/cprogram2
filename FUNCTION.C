#include<stdio.h>
void main()
{


int  total,s1,s2,s3,s4,s5;
float aggreate;
printf("enter a s1 marks");
scanf("%d",&s1);
printf("enter a s2 marks");
scanf("%d",&s2);
printf("enter a s3 marks");
scanf("%d",&s3);
printf("enter a s4 marks");
scanf("%d",&s4);
printf("enter a s5 marks");
scanf("%d",&s5);
total=s1+s2+s3+s4+s5;
aggreate=(total/5);
printf("aggreate is %f",aggreate);
}