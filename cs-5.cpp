#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 15;

int searchNearest(int anArray[],int key)
{
int value = abs(key - anArray[0]);
int num = 0;

for(int x = 0;x < MAX; x++)
{
    if(value > abs(key - anArray[x]))
    {
        value = abs(key - anArray[x]);
        num = anArray[x];
    }
}

return num;

}
