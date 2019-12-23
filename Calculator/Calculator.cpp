#include "Calculator.h"

double Calculator::add(double a, double b)
{
	return a + b;
}

double Calculator::subtract(double a, double b)
{
	return a - b;
}

double Calculator::divide(double a, double b)
{
	return a / b;
}

double Calculator::multiply(double a, double b)
{
	return a * b;
}

double Calculator::calculate(int a, int b, char op)
{
	switch (op) {
	case '+':
		return this->add(a, b);
	case '-':
		return this->subtract(a, b);
	case '/':
		return this->divide(a, b);
	case '*':
		return this->multiply(a, b);
	default:
		return 1;
	}
}
