#include "fizz_buzz_resolver.h"

void FizzBuzzResolver::initArray()
{
	for (int position = 0; position < SIZE; position++)
	{
		first100NumberList[position] = position + 1;
		multipleOfThree(first100NumberList[position]);
	}
}

void FizzBuzzResolver::multipleOfThree(int position)
{
	if (isExactlyDivisible(position, DIVISOR_OR_THREE))
	{
		cout << "FIZZ" << " "; 
	}
	else
	{
		cout << position << " ";
	}
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
}

