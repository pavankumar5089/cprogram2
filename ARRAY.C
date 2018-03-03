#include<stdio.h>
int main()
{
int data[5],i;
printf("enter elements");
for(i=0;i<5;i++)
scanf("%d",data+i);
printf(" the element are:\n");
for(i=0;i<5;i++)
printf("%d",*(data+i));
return(0);
}
