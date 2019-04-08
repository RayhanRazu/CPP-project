#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double s,area;
	cout << "Enter the side of the hexagon: ";
	cin >> s;
	area=((3*pow(3,.5))/2)*pow(s,2);
	cout <<"Area is: " <<area;
	
}
