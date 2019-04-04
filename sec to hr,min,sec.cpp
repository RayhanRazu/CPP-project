#include <iostream>
using namespace std;

int main()
{
	int input_sec,sec,min,hr,remain_sec,remain_min;
	cout << "Input the seconds: ";
	cin >> input_sec;
	hr = input_sec/(60*60);
	remain_sec = input_sec%(60*60);
	min = remain_sec/60;
	sec = remain_sec%60;
	cout << hr << " hr " << min << " min " <<sec << "sec";
	
	return 0;
	
}
