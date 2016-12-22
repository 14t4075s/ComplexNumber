#pragma once
#include <iostream>
#include <cmath>
#include <string>

class Complex
{
private:
	double real;
	double im;
public:
	Complex(double num = 0.0, double comp = 0.0);
	Complex operator+(Complex c);
	Complex operator-(Complex c);
	Complex operator*(Complex c);
	Complex operator/(Complex c);
	~Complex();

	friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};

