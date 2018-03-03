#include<stdio.h>

void main()
{
char username[20],password[10],nusername[20],npassword[10];
printf("enter a username and password");
scanf("%s%s",username,password);
printf("enter a nusernmae and npassword");
scanf("%s%s",nusername,npassword);
if(strcmp(username,nusername)==0&&strcmp(password,npassword)==0)
{
	printf("login into page");
}
}
