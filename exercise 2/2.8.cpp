#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int totalSeconds=time(0);
	int totalMinutes=totalSeconds/60;
	int currentSeconds=totalSeconds%60;
	int totalHours=totalMinutes/60;
	int currentMinutes=totalMinutes%60;
	int totalDays=totalHours/24;
	int currentHour=totalHours%24;
	cout <<"time is : "<< currentHour << ":"<< currentMinutes <<":" <<currentSeconds<< " GMT";
	
}
