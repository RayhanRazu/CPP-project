#include <iostream>
using namespace std;

int main ()
{
	int num1,ctr=0;
	cout << "check whether a number is prime or not\n";
	cout <<"-------------------------------------------\n";
	cout << "enter the number: ";
	cin>> num1;
	for (int a=1;a<=num1;a++)
	{
		if (num1%a==0)
		{
			ctr++;
			cout<<a << "\n";
		}
	}
	if (ctr==2)
	{
		cout << "the number is a prime number";
	}
	else 
	{
		cout << "the number is not a prime number";
	}
}
