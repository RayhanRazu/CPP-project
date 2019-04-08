#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double v,a,length;
	cout << "Enter the acceleration and speed: ";
	cin >>a>>v;
	length = pow(v,2)/(2*a);
	cout << "The minimum runway length is : " << length ;
	
	return 0;
}
