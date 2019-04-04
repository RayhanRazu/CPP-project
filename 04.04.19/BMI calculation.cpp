#include <iostream>
using namespace std;

int main()
{
  double meters,inch,pound,kg,weight,height,BMI;
  cout << " Enter your height in inch: ";
  cin >> inch;
  cout << " Enter your weight: ";
  cin >> pound;
  meters= inch*0.0254;
  kg = pound*0.45359237;
  BMI = kg/ (meters*meters);
  if (BMI<18.5)
  {
  	cout << "as your BMI is "<<BMI <<" so "<<" you are underweight";
  }
  else if (BMI<=25)
  {
  	cout<< "as your BMI is "<<BMI <<" so " << " you are perfect";
  }
  else 
  {
  	cout << "as your BMI is "<<BMI <<" so "<< " you are overweight";
  }
  
  return 0;
}
