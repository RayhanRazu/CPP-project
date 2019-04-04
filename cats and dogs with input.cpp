#include <iostream>
using namespace std;

int main()
{
	int numberofdogs=10;
	int numberofcats=20;
	int numberofanimals=numberofdogs+numberofcats;
	double extradogs;
	double extracats;
	
	cout << "number of DOGS: " << numberofdogs << endl;
	cout << "number of cats: " << numberofcats << endl;
	cout << "total number of animals: " << numberofanimals << endl;
	
	cout << "new dogs acquired! " << endl;
	cout << " enter the new acquired number of dogs: ";
	cin>> extradogs;
	numberofdogs=numberofdogs+extradogs;
	cout << "new number of dogs: " << numberofdogs << endl;
	
	cout << "new cats acquired!" << endl;
	cout << "enter the new number of cats: ";
	cin >> extracats;
	numberofcats=numberofcats+extracats;
	cout << "new number of cats: " << numberofcats << endl;
	numberofanimals=numberofdogs+numberofcats;
	cout << "new Total number of animals: " << numberofanimals << endl;
	
	return 0;
}
