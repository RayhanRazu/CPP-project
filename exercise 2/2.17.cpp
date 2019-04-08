#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double twc,ta,v;
	cout << "Enter temp in farenheight: ";
	cin>>ta;
	cout <<"Enter wind speed in mile per hour: ";
	cin>>v;
	
	twc= 35.74+0.6215*ta-35.75*pow(v,0.16)+0.4275*ta*pow(v,0.16);
	cout << "Wind chill index is: " << twc;
}
