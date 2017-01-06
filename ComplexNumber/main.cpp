#include "Complex.h"
using namespace std;

int main()
{
	char t;
	Complex c1(3, 15), c2(0, 10);
	cout << "c1 =" << c1 << "\tc2 =" << c2 << endl;
	cout << "Addition: " << c1 + c2 << "\nSubstraction: " << c1 - c2 << "\nMultiplication: " << c1*c2 << "\nDivision: " ;
	try
	{
		Complex c(0, 0);
		c = c1 / c2;
		cout << c << endl;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}
	cin >> t;
	return 0;
}