#include<stdio.h>
void main()
{
	printf("\t\tWELLCOME TO ELECTRICAL BOARD DEPARTMENT\n\n");
	
	printf("\t\tELECTRICITY TARIFF FOR HOUSEHOLDS (rates/unit)\n");
	printf("================================================================\n");
	printf(" upto 20 units...................................=rs.3/unit      |\n");
	printf("  21 to 30 units...................................=rs.7/unit    |\n");
	printf("  31 to 50 units...................................=rs.8.5/unit  |\n");
	printf("  51 to 150 units..................................=rs.10/unit   |\n");
	printf(" 151 to 250 units.................................=rs.11/unit    |\n");
    printf("251 to 400 units.................................=rs.12/unit     |\n");
	printf("400+ units.......................................=rs.13/unit     |\n");
	printf("=============================================================== \n");
   float total_bill;
    int units;
    printf("enter units");
    scanf("%d",&units);
    if(units<=20)
   {
    total_bill=units*3;
	}
	else if(units>=21 && units<30)
	{
	total_bill=units*7;
	}
	else if(units>=31 && units<50)
	{
	total_bill=units*8.5;
	}
	else if(units>=51 && units<150)
	{
	total_bill=units*10;
    }  
	else if(units>=151 && units<250)
	{
	total_bill=units*11;
    } 
    else if(units>=251 &&units<400)
	{
	total_bill=units*12;
    } 
    else
    {
	total_bill=units*13;
    } 
printf("enter total units consumed=%f",total_bill);
}
