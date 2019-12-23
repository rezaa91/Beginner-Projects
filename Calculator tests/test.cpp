#include "pch.h"
#include "../Calculator/Calculator.h"

class CalculatorTest : public testing::Test
{
public:
	Calculator* calc;

	void SetUp()
	{
		this->calc = new Calculator;
	}
	void TearDown()
	{
		delete this->calc;
	}
};

TEST_F(CalculatorTest, testCalculatorAddition)
{
	double res = calc->calculate(2, 2, '+');
	EXPECT_EQ(res, 4);
}
