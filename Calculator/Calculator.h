#pragma once
class Calculator
{
private:
	double add(double a, double b);
	double subtract(double a, double b);
	double divide(double a, double b);
	double multiply(double a, double b);
public:
	double calculate(int a, int b, char op);
};

