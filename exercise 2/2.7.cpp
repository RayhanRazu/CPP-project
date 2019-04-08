#include <iostream>
using namespace std;

int main()
{
	int years,days,mins,minutes,remain_mins;
	cout << "Enter the minutes: ";
	cin >>mins;
	years=mins/(365*24*60);
	remain_mins=mins% (365*24*60);
	days=remain_mins/(24*60);
	minutes=remain_mins%(24*60);
	cout << "Its approximately " <<years <<" years "<<days<<" days and " <<minutes<<" minutes";
	
	return 0;
}
