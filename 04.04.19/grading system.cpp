#include <iostream>
using namespace std;

int main ()
{
	int mark=100;
	cout << " Enter obtained number: ";
	cin >> mark;
	if (mark<=100)
	{
		if (mark>=80 && mark <=100)
		{
			cout << " you Got A+ grade";
		}
		else if(mark>=70 && mark<=79)
		{
			cout << " You got A grade";
			
		}
		else if (mark>=50 && mark<=69)
		{
			cout << " You got A- grade";
		}
		else if (mark>30)
		{
			cout << " You passed ";
		}
		else if (mark<30)
		{
			cout << " you failed";
		}
		else 
		{
			cout << " invalid number";
		}
	}
		else {
			cout << " Congratulations ! You did the math many times";
		}
		return 0;
}
