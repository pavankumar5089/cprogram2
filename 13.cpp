#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;



class employee
{
public:
   employee();//
    employee(string name, int salary);//


public:
  string name;//name to be input
  int salary;//salary to be input

public:
int enter_values();
int output_values();
int NEW_SALARY( int percentage_raise);



};


//default constructo
employee::employee()
{
    name = "";
    salary = 0;
}

//constructor with name/salary variables
employee::employee(string NAME, int SALARY)
{
    name= NAME;
    salary= SALARY;
}

//name and salary to be input...
int employee::enter_values()
{ cout<<"Enter name and salary: ";
  cin>> name;
  cin>>salary;



}

//output

int employee::output_values()
{ cout<<"Name: "<<name<<endl;
  cout<<"Salary: "<<salary<<endl;


}


//
int employee::new_salary(int percentage_raise)
{

   employee updated_salary;

    if ( percentage_raise >= 0){salary= salary *(percentage_raise/100);


}

else if(percentage_raise< 0)
{ cout<<"Error Message"<<endl;

}

 return percentage_raise;
}



int main()
{
   employee employees[100];
   employee.new_salary();
   int percent= 0;
   int i;
   for(i =0 ;i<100 ; i++)
   { employees[i]=employee();
     employees[i].enter_values();
     employees[i].name;
     employees[i].salary;

     employees[i].output_values();


        cout<<"How much should the salary be raised by?"<<endl;

        cin>>percentage_raise;
        cout<<employee.name<<"'s new salary is "<<percentage_raise<<endl;
   }








}
