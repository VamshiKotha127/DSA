#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

//most significant bit index

int main()
{
    unsigned int n = 0b100010001; //273
    
    n |= (n >> 1);
    n |= (n >> 2);
    n |= (n >> 4);
    n |= (n >> 8);
    n |= (n >> 16);

    //CHAR_BIT --> 8 when 1 char is stored in 8 bytes
    
    n = ((n + 1) >> 1) | (n & ( 1<< ((sizeof(n) * CHAR_BIT) -1))); //31st bit
            

    cout << log2(n) << endl;

    return 0;
}