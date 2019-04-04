/* average of two numbers*/



#include <iostream>
using namespace std;

int main ()
{
    float a,b,average;
	cout << " average of two numbers\n";
	cout <<"--------------------------\n";
	cout << "enter the two numbers: \n";
	cout << "number 1: ";
	cin >> a; 
	cout << "number 2: ";
	cin >> b;
	average = (a+b)/2.0;
	cout << " the average is : " << average << endl;
	
	return 0;
}
