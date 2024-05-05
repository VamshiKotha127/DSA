#include <iostream>

using namespace std;

//swap even bits and odd bits

int main()
{
    unsigned int input = 0x1234ABCD;
    
    //input  --> 0001  0010 0011 0100 1010 1011 1100 1101
    //output --> 0010  0001 0011 1000 0101 0111 1100 1110
    
    unsigned int odd = input & 0xAAAAAAAA; // A= 1010
    unsigned int even = input & 0x55555555; // 5= 0101
    
    int res;
    
    odd = odd >> 1;
    even = even << 1;
    
    res = odd | even;
    
    cout << hex << res<< endl;
    
    return 0;
}