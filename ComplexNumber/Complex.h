#pragma once
#include <iostream>
#include <cmath>
#include <string>

/**
*  Complex class. Allow operations on complex numbers
*/
class Complex
{
private:
	/**
	*  a private variable.
	* representes the real part of the complex number.
	*/
	double real;
	/**
	*  a private variable.
	* representes the imaginary part of the complex number.
	*/
	double im;
public:
	/**
	* Complex class Constructor.
	* the class is built using the real and  imaginary part of the number as argument.
	*/
	Complex(double num = 0.0, double comp = 0.0);
	/**
	* a member taking a complex argument and returning a complex
	* @param c a Complex argument.
	* @return the addition result
	*/
	Complex operator+(Complex c);
	/**
	* a member taking a complex argument and returning a complex
	* @param c a Complex argument.
	* @return the substraction result
	*/
	Complex operator-(Complex c);
	/**
	* a member taking a complex argument and returning a complex
	* @param c a Complex argument.
	* @return the multiplication result
	*/
	Complex operator*(Complex c);
	/**
	* a member taking a complex argument and returning a complex
	* @param c a Complex argument.
	* @return the division result
	*/
	Complex operator/(Complex c);
	~Complex();
	/**
	* a friend taking an output stream and a complex argument and returning an output stream
	* @param c a Complex argument.
	* @return the output of the complex number
	*/
	friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};

