#include<stdio.h>
void main()
{
int a[90][90],b[90][90],c[90][90],m,n,p,q,i,j;
printf("enter row and columns of matrics a");
scanf("%d%d",&m,&n);
printf("elements of a");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter row and colums of matrics  b");
scanf("%d%d",&p,&q);
printf(" elements of b");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
{
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
c[i][j]=a[i][j]+b[i][j];
}
printf("result matrics is \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
}
