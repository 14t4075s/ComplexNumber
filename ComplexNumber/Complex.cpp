#include "Complex.h"



Complex::Complex(double num , double comp ):
	real(num),
	im(comp)
{
	
}

Complex Complex::operator+(Complex c)
{
	double a(0), b(0);
	a = this->real + c.real;
	b = this->im + c.im;
	return Complex(a, b);
}

Complex Complex::operator-(Complex c)
{
	double a(0), b(0);
	a = this->real - c.real;
	b = this->im - c.im;
	return Complex(a, b);
}

Complex Complex::operator*(Complex c)
{
	double a(0), b(0);
	a = (this->real * c.real) - (this->im * c.im);
	b = (this->real * c.im) + (this->im * c.real);
	return Complex(a, b);
}

Complex Complex::operator/(Complex c)
{
	double a(0), b(0);
	a = ((this->real * c.real) + (this->im * c.im)) / (pow(c.real, 2) + pow(c.im, 2));
	b = ((this->im * c.real) - (this->real * c.im)) / (pow(c.real, 2) + pow(c.im, 2));
	return Complex(a, b);
}

std::ostream& operator<<(std::ostream& os, const Complex& c)
{
	if (c.im != 0.0 && c.real != 0.0)
	{
		os << c.real << '+' << c.im << 'i';
	}
	else if(c.real == 0.0)
	{
		os << c.im << 'i';
	}
	else
	{
		os << c.real;
	}
	return os;
}


Complex::~Complex()
{
}
