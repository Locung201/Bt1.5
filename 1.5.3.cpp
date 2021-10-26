#include <iostream>
#include <math.h>

using namespace std;
int main()
{	
	double weight, height, BMI;
	
	cout <<"What's your weight? "; //kg
	cin >> weight;
	
	cout <<"What's your height? "; //m
	cin >> height;
	
	BMI = weight / (height*height);
	
	cout <<"Body Mass Index: " << BMI <<"\n";

	if (BMI < 18.5)
	cout <<"Thin";

	if (18.5 <= BMI && BMI<= 25)
	cout <<"Normal";

	if (25 < BMI && BMI<= 30)
	cout <<"Fat";

	if (30 < BMI)
	cout <<"Obese";
	return 0; 
}
