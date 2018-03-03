#include<stdio.h>
void main()
{
int a[50],*p,i,n;
p=&a;
printf("enter size of array");
scanf("%d",&n);
printf("enter element of array");
for(i=0;i<n;i++)
scanf("%d",p+i);
for(i=0;i<n;++i)
printf("%d",*(p+i));
getch();
}
