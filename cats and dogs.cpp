#include <iostream>
using namespace std;

int main()
{
	int numberofdogs=10;
	int numberofcats=20;
	int numberofanimals=numberofdogs+numberofcats;
	
	cout << "number of DOGS: " << numberofdogs << endl;
	cout << "number of cats: " << numberofcats << endl;
	cout << "total number of animals: " << numberofanimals << endl;
	
	cout << "new dogs acquired! " << endl;
	numberofdogs=numberofdogs+1;
	cout << "new number of dogs: " << numberofdogs << endl;
	
	cout << "new cats acquired!" << endl;
	numberofcats=numberofcats+3;
	cout << "new number of cats: " << numberofcats << endl;
	numberofanimals=numberofdogs+numberofcats;
	cout << "new Total number of animals: " << numberofanimals << endl;
	
	return 0;
}
