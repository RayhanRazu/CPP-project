#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,result;
	cout << "enter any number: ";
	cin>>a;
	result=a%2;
	if (result==0)
	{
		cout <<" its even number";
	}
	else
	{
		cout <<"its odd number";
	}
}
