/*1 to 10 over 
per over has 6 balls
every over's first ball is wide ball
3 and 5 number over's 3 and 5 number ball is no ball
after 5 number over we have break*/



#include <iostream>
using namespace std;

int main ()
{
	int over,ball;
	for (over=1;over<=10;over++)
	{
		cout << "over" << over << "\n";
		for (ball=1;ball<=6;ball++)
		{
			cout << "\tball:" << ball;
			if (ball==1)
			{
				cout <<"wide ball";
			 } 
		if ((over==3 && ball==3)||(over==5 && ball==5))	
		cout << "no ball"; 
		cout << "\n";
		}
		if (over==5)
		cout << "\n\twe need a break\n\n" ;
	}
	return 0;
}
