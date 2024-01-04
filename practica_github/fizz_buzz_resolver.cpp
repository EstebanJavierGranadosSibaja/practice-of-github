#include "fizz_buzz_resolver.h"

void FizzBuzzResolver::initArray()
{
	for (int position = 0; position < SIZE; position++)
	{
		first100NumberList[position] = position + 1;
	}
}

void FizzBuzzResolver::multipleOfThree(int position)
{
	if (isExactlyDivisible(position, DIVISOR_OR_THREE))
	{
		cout << "Fizz" << " "; 
	}
}

void FizzBuzzResolver::multipleOfFive(int position)
{
	if (isExactlyDivisible(position, DIVISOR_OR_FIVE))
	{
		cout << "Buzz" << " ";
	}
}

bool FizzBuzzResolver::isExactlyDivisible(int number, int divisor)
{
	bool isExactlyDivisible = number % divisor == 0;

	if (isExactlyDivisible)
	{
		return true;
	}
	return false;
}

void FizzBuzzResolver::fizzBuzz()
{
	initArray();

	for (int position = 0; position < SIZE; position++)
	{
		if (first100NumberList[position] % DIVISOR_OR_THREE == 0)
		{
			multipleOfThree(first100NumberList[position]);
			continue;
		}

		if (first100NumberList[position] % DIVISOR_OR_FIVE == 0)
		{
			multipleOfFive(first100NumberList[position]);
			continue;
		}

		cout << first100NumberList[position] << " ";
	}
}

