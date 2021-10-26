//1.They only change the scope, the memory is the same.
//2.Line 6: number is not declared. Move line number 7 up on
#include <iostream>
using namespace std;

int main()
{
	double cookies, nb;
	cout << "How many cookies you want? ";
	cin >> cookies;
	nb = cookies / 48;
	cout << "Your recipe:\n";
	cout << nb * 1.5 << "cups of sugar.\n";
	cout << nb * 1 <<"cups of butter.\n";
	cout << nb * 2.75 <<"cups of flour";
	return 0 ;
}
