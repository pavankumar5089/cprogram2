#include<stdio.h>

struct time
{
	int mintues;
	int seconds;
	int hours;
};
void difference(struct time t1,struct time t2,struct time *diff);
int main()
{
	struct time t1,t2,diff;
	printf("enter start time:\n");
	printf("enter hours mintues and seconds:\n");
	scanf("%d%d%d",&t1.hours,&t1.mintues,t1.seconds);
	printf("enter stop time:\n");
	printf("enter hours,mintues and seconds:");
		scanf("%d%d%d",&t2.hours,&t2.mintues,t2.seconds);
		printf("\n time difference:%d:%d:%d-",t1.hours,t1.mintues,t1.seconds);
			printf("\n time difference:%d:%d:%d-",t2.hours,t2.mintues,t2.seconds);
printf("=%d:%d:%d\n",diff.hours,diff.mintues,diff.seconds);
return 0;
}
