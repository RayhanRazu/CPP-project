#include <iostream>
using namespace std;

int main ()
{
	cout << "find size of fundamental data types: \n";
	cout <<"--------------------------------------\n";
	cout << " the size of (char) is:         " << sizeof(char) << " bytes \n";
	cout << " the size of (short) is:        " << sizeof(short) << " bytes \n";
    cout << " The sizeof(int) is :           " << sizeof(int) << " bytes \n" ;
    cout << " The sizeof(long) is :          " << sizeof(long) << " bytes \n" ;
    cout << " The sizeof(long long) is :     " << sizeof(long long) << " bytes \n";
    cout << " The sizeof(float) is :         " << sizeof(float) << " bytes \n" ;
    cout << " The sizeof(double) is :        " << sizeof(double) << " bytes \n";
    cout << " The sizeof(long double) is :   " << sizeof(long double) << " bytes \n";
    cout << " The sizeof(bool) is :          " << sizeof(bool) << " bytes \n\n";
	
	return 0;
}
