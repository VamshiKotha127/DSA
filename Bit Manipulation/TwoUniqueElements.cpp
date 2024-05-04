#include <iostream>

using namespace std;

int main()
{
  int arr[]={1, 2, 7, 2, 1, 14};
  
   int temp=0;

  for(int i=0; i<6; i++)
  {
      temp = temp ^ arr[i];
  }
  
  int rightMostSetBit;
  
  for(int i=0; (temp != 0); i++)
  {
      if(((temp >> i) & 1) != 0)
      {
          rightMostSetBit=i;
          break;
      }
  }

  int num1=0;
  int num2 =0;
  
  for(int i=0; i< 6; i++)
  {
     if(((arr[i] >> rightMostSetBit) & 1) != 1)
     {
        num1 = num1 ^ arr[i];
     }
     
     if(((arr[i] >> rightMostSetBit) & 1) != 0)
     {
        num2 = num2 ^ arr[i];
     }
  }
  
  cout << num1 << " " << num2 << endl;
  
 return 0;
}