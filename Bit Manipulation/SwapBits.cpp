#include <iostream>

using namespace std;

//a - 10 - 1010
//b - 11 - 1011
//c - 12 - 1100
//d - 13 - 1011
//e - 14 - 1110
//f - 15 - 1111
int main()
{
  int n=13; // 1101
  int  a=1; // 1011
  int b=2;
  
  int res=n;
  int mask1=(1<<a);
  int mask2=(1<<b);
  
  int masked1=0,masked2=0;
  
  masked1 = res & masked1;
  masked2 = res & masked2;
  
  res = res & ~(masked1);
  res = res & ~(masked2);
  
  if(a < b)
  {
      res= res | ((masked1) << (b-a));

      res= res | ((masked2) >> (b-a));

  }
  else
  {
      res= res | (masked1 >> (a-b));
      res= res | (masked2 << (a-b));
  }
  
  cout << hex<<res << endl;

 return 0;
}