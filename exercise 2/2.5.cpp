#include <iostream>
using namespace std;

int main()
{
	double tips,tipsrate,bill,total_bill;
	cout << "Enter the bill : ";
	cin >> bill;
	cout <<"enter the gratuity rate: ";
	cin>>tipsrate;
	tips= (tipsrate*bill)/100;
	total_bill= tips+bill;
	cout << "the gratuity is $" <<tips <<" and total bill is $"<<total_bill;
	
	return 0;
}
