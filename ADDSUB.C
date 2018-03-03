#include<stdio.h>
void main()
{
int a,b,c;
char ch;
printf("enter your character ");
scanf("%c",&ch);
printf("enter a,b,c values");
scanf("%d%d%d",&a,&b,&c);
switch(ch)
{
case'+':printf("add=%d",a+b+c);
break;
case'-': printf("sub=%d",a-b-c);
break;
}
}
