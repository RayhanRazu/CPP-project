#include <iostream>
using namespace std;

int main ()
{
	double farenheit,celsius;
	cout << "enter the farenheit: " ;
	cin >> farenheit;
	celsius=(5.0/9)*(farenheit-32);
	cout<< "its " << celsius << " celsius"<< endl;
	
	return 0;
}
