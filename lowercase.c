#include<stdio.h>

int main()
{
	int c=0;
	char ch,s[1000];
	
	printf("input a string ");
	gets(s);
	while(s[c]!='\0'){
		ch=s[c];
		if(ch >='a' && ch <= 'z')
		s[c]=s[c]+32;
		else if (ch >='A' && ch <='Z')
		s[c]=s[c]-32;
		c++;
	}
	printf("%s",s);
	return(0);
}

