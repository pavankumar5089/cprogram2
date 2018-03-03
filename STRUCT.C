#include<stdio.h>

struct details{
       char collge[10],school[10],address[10],mail[10];
};
struct student{

char name[10],city[10];
int age,contact;
struct details data;
};
void main()
{
struct  student s1;
printf("enter a name");
scanf("%s",&s1.name);
printf("enter a city");
scanf("%s",&s1.city);
printf("enter a age");
scanf("%d",&s1.age);
printf("enter a contact");
scanf("%d",&s1.contact);
printf("details of student: name is= %s city = %s age is %d contact is %d",s1.name,s1.city,s1.age,s1.contact);
printf("enter a collge");
scanf("%s",s1.data.collge);
printf("enter a school");
scanf("%s",s1.data.school);
printf("enter a address");
scanf("%s",s1.data.address);
printf("enter a mail");
scanf("%s",s1.data.mail);
printf(" collge is %s school is %s address is %s mail is %s",s1.data.collge,s1.data.school,s1.data.address,s1.data.mail);
}





