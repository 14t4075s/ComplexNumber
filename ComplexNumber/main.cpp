#include "Complex.h"
using namespace std;

int main()
{
	Complex c1(2, 3), c2(3, 2);
	cout << "c1 =" << c1 << "\tc2 =" << c2 << endl;
	cout << "Addition: " << c1 + c2 << "\nSubstraction: " << c1 - c2 << "\nMultiplication: " << c1*c2 << "\nDivision: " << c1 / c2 << "\n";
	return 0;
}