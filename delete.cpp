#include <iostream>
using namespace std;

int main ()
{
	int a,num,ctr=0;
	cout << " enter the number to check its prime or not: ";
	cin >> num;
	for (a=1;a<=num;a++)
	{
		if (num%a==0)
		{
			ctr++;
			cout << a << "\n";
		}
	}
	if ( ctr==2)
	{
		cout << " its prime num";
	}
	else 
	{
		cout << "its not prime";
	}
}
