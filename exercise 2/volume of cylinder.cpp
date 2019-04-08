#include <iostream>
using namespace std;

int main()
{
	double length,radius,area,volume;
	cout << "enter the radius: ";
	cin >> radius;
	cout << "enter the length: ";
	cin>>length;
	area= radius*radius*3.1416;
	volume= area*length;
	cout << " the volume of the cylinder is: " << volume;
	
	return 0;
}
