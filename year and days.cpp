#include <iostream>
using namespace std;

int main ()
{
	int input_days,days,year,month,remainday;
	cout << "Enter total days: ";
	cin >> input_days;
	year= input_days/365;
	remainday=input_days%365;
	month=remainday/30;
	days= remainday%365;
	cout << "its "<< year << " year " <<month << " month " <<" and " << days<<" days"<<endl;
	return 0;
}
