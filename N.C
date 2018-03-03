#include<stdio.h>
#include<string.h>
void main()
{
char str1[10],str2[10];
int i=0;
printf("\nEnter the string");
gets(str1);
while(str1[i]!='\0')
{
str2[i]=str1[i];
i++;
}
str2[i]='\0';//terminating
printf("%s\n",str2);
}


























#include<stdio.h>
