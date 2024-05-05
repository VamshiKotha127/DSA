#include <iostream>

using namespace std;

//swap bytes

int main()
{
    int input = 0x1234ABCD; //0x 12 34 AB CD
    int a=3;
    int b=1;
    
    int mask1 = 0xFF << 8*a;
    int mask2 = 0xFF << 8*b;
    
    int masked1 = input & mask1;
    int masked2 = input & mask2;

    int res=input;
    
    res = res & ~(mask1);
    res = res & ~(mask2);
    
    if(a < b)
    {
        res = res | (masked1 << 8*(b-a));
        res = res | (masked2 >> 8*(b-a));
    }
    else
    {
        res = res | (masked1 >> 8*(a-b));
        res = res | (masked2 << 8*(a-b));
    }
    
    cout << hex << res<< endl;
    
    return 0;
}