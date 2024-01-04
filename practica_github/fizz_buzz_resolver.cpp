#include "fizz_buzz_resolver.h"

void FizzBuzzResolver::initArray()
{
	for (int position = 0; position < SIZE; position++)
	{
		first100NumberList[position] = position + 1;
		cout << first100NumberList[position] << " ";
	}
}

bool FizzBuzzResolver::multipleOfThree(int position)
{
		bool isAMultipleOfThree = position % DIVISOR_OR_THREE == 0;

		if (isAMultipleOfThree)
		{
			return true;
		}

	return false;
}

bool FizzBuzzResolver::multipleOfFive(int position)
{
	bool isAMultipleOfFive = position % DIVISOR_OR_FIVE == 0;

	if (isAMultipleOfFive)
	{
		return true;
	}

	return false;
}

bool FizzBuzzResolver::isExactlyDivisible(int position, int divisor)
{
	bool isExactlyDivisible = position % divisor == 0;

	if (isExactlyDivisible)
	{
		return true;
	}
	return false;

	return false;
}

