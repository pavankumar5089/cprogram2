#include<stdio.h>
void copystr(char*,char*);
void main()
{
char*str1="pavan";
char str2[30];
clrscr();
copystr(str2,str1);
printf("%s",str2);
getch();
}
void copystr(char*dest,char*scr)
{
while(*scr!='/0')
*dest++=*scr++;
*des='/0';
return(0);
}
