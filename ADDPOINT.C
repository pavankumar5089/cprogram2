#include<stdio.h>
int main()
{
int a,b,*p,*q,sum,first,second;
printf("enter 2 nos");
scanf("%d%d",&a,&b);
p=&first;
q=&second;
sum=*p+*q;
printf("sum is %d",sum);
return 0;
}
