#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double a, b, c, max, min;
	cout <<"Enter three numbers: ";
	cin >>a >>b >>c;
	if (a>b)
	{
	max = a; min = b;
	} else {
	max = b; min = a;
	}
	if (c>max)
	max = c;
	
	if (c<min)
	min = c;
	
	cout <<"Max: "<< max <<"\n";
	cout <<"Min: "<<min;
	return 0;
}
