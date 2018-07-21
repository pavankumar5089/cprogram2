#include <iostream>
//#include <cstdlib>
using namespace std;

int g_c_d (int a, int b)
{
if (a <= 0 || b <= 0) // a parameter is not positive
return 0; // exit and return the error sentinel
int divisor;
divisor = ( a <= b ? a : b ); // set it to the smaller
while (a % divisor != 0 || b % divisor != 0)
--divisor;
return divisor;
}

int main(){
 int n1=64, n2=42;
 cout<<g_c_d(n1, n2);
}
