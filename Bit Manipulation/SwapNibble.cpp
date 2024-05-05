#include <iostream>

using namespace std;

//swap nibble
int main()
{
    int input = 0x1234ABCD;
    int a=1;
    int b=3;
    
    int mask1 = 0xF << 4*a;
    int mask2 = 0xF << 4*b;
    
    int masked1 = input & mask1;
    int masked2 = input & mask2;

    int res=input;
    
    res = res & ~(mask1);
    res = res & ~(mask2);
    
    if(a < b)
    {
        res = res | (masked1 << 4*(b-a));
        res = res | (masked2 >> 4*(b-a));
    }
    else
    {
        res = res | (masked1 >> 4*(a-b));
        res = res | (masked2 << 4*(a-b));
    }
    
    cout << hex << res<< endl;
    
    return 0;
}