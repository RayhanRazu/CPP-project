#include <iostream>
using namespace std;

int main()
{
	double v0,v1,a,t;
	cout << "enter the initial and final velocity and time: ";
	cin>> v0>>v1>>t;
	a= (v1-v0)/t;
	cout << "accelaration is: " <<a;
}
