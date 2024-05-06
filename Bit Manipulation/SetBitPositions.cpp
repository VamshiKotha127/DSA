#include <iostream>
#include <math.h>

using namespace std;

//setbit positions

void decToBin(long long int n)
{
    int binArray[64] = {0};
    
    int i=0;
    while(n)
    {
        binArray[i++] = n % 2;
        n = n /2;
    }
    
    
    for(int j=63; j >=0; j--)
    {
        cout << binArray[j];
    }
    cout << endl;
}
int main()
{
    long long int n= 1256479;
    
    decToBin(n);
    while(n > 0)
    {
        int pos = log2(n & -n);
        
        cout << pos << " ";
        n  = n & (~(1 << pos));
    }
    cout << endl;
    
    return 0;
}