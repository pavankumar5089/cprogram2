#include<stdio.h>
void reservation(void);							
void viewdetails(void);							
void cancel(void);

int main()
{
	printf("============================================================\n");
	printf("|                                                          |\n");
	printf("|                                                          |\n");
	printf("|  ----------------------------------------------          |\n");
	printf("|                    TRAIN TICKET RERS.SYSTEM              |\n");
	printf("|                                                          |\n");
	printf("|  ----------------------------------------------          |\n");
	printf("|                                                          |\n");
	printf("|                                                          |\n");
	printf("============================================================\n");
printf("press any key to continue:\n\n");
	printf("\n -------------------    LOGIN FORM    ---------------------\n");
	printf("\n                   ENTER USERNAME:-USER");
	printf("\n                   ENTER PASSWORD:-******\n\n");
	printf("\n WELCOME TO OUR SYSTEM !! YOUR LOGIN IS SUCCESSFUL\n\n");
	printf("                                  press any key to continue...");
	    system("cls");
	login();
	int menu_choice,choice_return;
	start:
	printf("\n=================================\n");
	printf("    TRAIN RESERVATION SYSTEM");
	printf("\n=================================");
	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n2>> View All Available Trains");
	printf("\n------------------------");
	printf("\n3>> Cancel Reservation");
	printf("\n------------------------");
	printf("\n4>> Exit");
	printf("\n------------------------");
	printf("\n\n-->");
	scanf("%d",&menu_choice);
	switch(menu_choice)
	{
		case 1:
			reservation();		
			break;
		case 2:
			viewdetails();
			printf("\n\nPress any key to go to Main Menu..");
			getch();
			break;
		case 3:
			cancel();
		
			break;
		case 4:
			return(0);
		default:
			printf("\nInvalid choice");
	}
	goto start;
	return(0);
 }
 void reservation()
 {
printf("\n enter your name:->");
scanf("%s",name);
printf("\n enter number of seats:-> ");
scanf("%d",seats);
printf("\n\n >>press enter to view available  train  ")
 } 
 void viewdetails()
 {
 	printf("-----------------------------------------------------------------------------");	
	printf("\nTr.No\tName\t\t\tDestinations\t\tCharges\t\tTime\n");
	printf("-----------------------------------------------------------------------------");
	printf("\n1001\tRed Lines Express\tBoston to Manhattan\tRs.5000\t\t9am");
	printf("\n1002\tRed Lines Express\tManhattan To Boston\tRs.5000\t\t12pm");
	printf("\n1003\tLA City Express\t\tBoston To L.A\t\tRs.4500\t\t8am");
	printf("\n1004\tLA City Express\t\tL.A To Boston\t\tRs.4500\t\t11am");
	printf("\n1005\tIron City Express\tBoston To Chicago\tRs.4000\t\t7am");
	printf("\n1006\tIron City Express\tChicago To Boston\tRs.4000\t\t9.30am");
    printf("\n1007\tKeystone Express\tBoston To Washington\tRs.3500\t\t1pm");	
    printf("\n1008\tKeystone Express\tWashington To Boston\tRs.3500\t\t4pm");
    printf("\n1009\tMeteor Express\t\tBoston To Miami\t\tRs.6000\t\t3.35pm");
    printf("\n1009\tMeteor Express\t\tMiami To Boston\t\tRs.6000\t\t4.15pm");
    
}

 }
void cancel()
{
 } 
 
 
   

