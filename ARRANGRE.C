#include<stdio.h>
void main()
{
int i,j,a,n,num[30];
printf("enter n values ");
scanf("%d",&n);
printf("enter no's");
scanf("%d",&num[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;++j)
{
if(num[i]>num[j])
{
a=num[i];
num[i]=num[j];
num[j]=a;
}
}
}
printf("the no of arragrement in acceending order are given below");
for(i=0;i<n;++i)
printf("%d",num[i]);
}