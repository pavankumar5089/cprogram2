#include<iostream>
#include<conio.h>
using namespace std;
 class bank{
 	private:
 	 char name[30];
     char accname[20];
      char type[20];
      int ibalance;
     int dop;
     int with;
	 public:
	 void menu(void);
	 void get(void);
	 void deposite(void);
	 void check(void);
	 void withdraw(void);
	 void info(void);	
 };
 void bank::menu()
 {
 	int me;
 	cout<<"-----------------------------------------------------------------------------\n";
 	cout<<"-----------------------------------------------------------------------------\n";
 	cout<<"choose your option from 1to6\n";
 	cout<<"\t1.create a new account\n ";
 	cout<<"\t2.deposite your money\n";
 	cout<<"\t3.check your balance\n";
 	cout<<"\t4.withdraw account\n";
 	cout<<"\t5.all account info\n";
 	cout<<"\t6.exit\n";
 	cout<<"-----------------------------------------------------------------------------\n";
 	cout<<"-----------------------------------------------------------------------------\n";
 	cin>>me;
 	switch(me)
 	{
 		case 1:
 			get();
 		     break;
		 case 2:
		     deposite();
		     break;
		 case 3:
		      check();
		     break;
		      case 4:
		     withdraw();
		     break;
		     case 5:
		     	info();
		     	break;
		     	default:
		     		break;
		     		
		     
	 }
		
 }
 void bank::get()
 {
 	int go;
 	cout<<"-----------------------------------------------------------------------------\n";
 	cout<<"\tenter your name:";
 	cin>>name;
 	cout<<"\n";
 	cout<<"\tenter account name:";
 	cin>> accname;
 	cout<<"\n";
 	cout<<"\tenter the type of account:";
 	cin>>type;
 	cout<<"\n";
 	cout<<"\thow much money your deposting";
 	cout<<"\t\t";
 	cin>>ibalance;
 	cout<<"-----------------------------------------------------------------------------\n";
 	cout<<"\t\t\nHit \ '0\' for Goto  Main menu:";
 	cout<< "\n";
 	cin>>go;
 	if(go==0)
 	{
 	 menu();
	  }
	 else
	  return;
 	
     } 
     void bank::deposite()
   {
   	int go;
   	cout<<"\thow much money your deposting";
   	cin>>dop;
   	dop+=ibalance;
   		cout<<"\t\t\nHit \ '0\' for Goto  Main menu:";
 	cout<< "\n";
 	cin>>go;
 	if(go==0)
 	{
 	 menu();
	  }
	 }  
	 void bank::check()
	 {
	 	int go;
	 	cout<<"your current balance"<<dop;
	 		cout<<"\t\t\nHit \ '0\' for Goto  Main menu:";
 	cout<< "\n";
 	cin>>go;
 	if(go==0)
 	{
 	 menu();
	  }
	 }
	 void bank::withdraw()
	 {
	 	int go;
	 	cout<<"how much money you wanna withdraw\n";
	 	cin>>with;
		 dop-=with;
		 cout<<" \n\nafter withdrwaing your balance:"<<dop;
		 	cout<<"\t\t\nHit \ '0\' for Goto  Main menu:";
 	cout<< "\n";
 	cin>>go;
 	if(go==0)
 	{
 	 menu();
	  }
	 }
	 void bank::info()
	 {
	 	int go;
	 	cout<<"\nname of the depositor:"<<name;
	 	cout<<"\name of the account:"<<accname;
	 	cout<<"\ntype of account:"<<type;
	 	cout<<"\namount in your account"<<dop;
	 	cout<<"\t\t\nHit \ '0\' for Goto  Main menu:";
 	cout<< "\n";
 	cin>>go;
 	if(go==0)
 	{
 	 menu();
	  }
	  else
	  return;
	 }
	 
	 
 int main()
 {
 	bank obj;
 	obj.menu();
 	getch();
 	 return (0);
 }
