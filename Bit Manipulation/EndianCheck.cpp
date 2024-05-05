#include <iostream>

using namespace std;

int main()
{
	unsigned int a = 1;
	
	char* p = (char*)&a;
	
	//0
	//0
	if(*p)
	{
	    cout << "little endian" << endl;
	}
	else
	{
	    cout << "big endian" << endl;
	}
	return 0;
}
