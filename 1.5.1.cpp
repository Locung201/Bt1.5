#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double a,b;
	cout <<"Enter two numbers: ";
	cin >>a >>b;
	if (a>b)
	{
		cout <<"Max: "<< a <<"\n";
		cout <<"Min: "<< b;
	} else {
		cout <<"Max: "<< b <<"\n";
		cout <<"Min: "<<a;
	}
	return 0;
}
