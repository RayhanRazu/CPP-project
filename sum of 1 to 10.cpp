#include <iostream>
using namespace std;

int main ()
{
	int i,sum=0;
	cout << "find the sum of first ten natural numbers\n" ;
	cout << "-----------------------------------------\n" << endl;
	cout << "the natural numbers are: \n";
	for (i=1;i<=123456789012345678901234567890123456789012345678901234567890;i++)
	{
		cout << i << " ";
		sum=sum+i;
	}
 cout << "\nthe sum of first 10 naturals numbers is:  " << sum;

return 0;
}
