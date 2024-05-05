#include <iostream>

using namespace std;

int main()
{
    int a=7;
    int b = 10;
    
    int xorAB = a ^ b;
    
    int counter =0;
    while(xorAB > 0)
    {
        xorAB = xorAB & (xorAB -1);
        counter++;
    }
    
    cout << counter << endl;
  
 
 return 0;
}