#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	Calculator calc;
	int a, b;
	char op;

	while (cin >> a >> op >> b) {
		double res = calc.calculate(a, b, op);
		cout << "Result: " << res << endl;
	}

	return 0;
}