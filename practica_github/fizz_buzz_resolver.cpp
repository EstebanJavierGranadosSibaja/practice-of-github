#include "fizz_buzz_resolver.h"

void FizzBuzzResolver::initArray()
{
	for (int position = 0; position < SIZE; position++)
	{
		first100NumberList[position] = position + 1;
		fizzBuzzAndPingPong(first100NumberList[position]);
	}
}

string FizzBuzzResolver::multipleOfTwo(int position)
{
	if (isExactlyDivisible(position, DIVISOR_OR_TWO))
	{
		return "Ping";
	}
	return "";
}

string FizzBuzzResolver::multipleOfThree(int position)
{
	if (isExactlyDivisible(position, DIVISOR_OR_THREE))
	{
		return "Fizz";
	}
	return "";
}

string FizzBuzzResolver::multipleOfFive(int position)
{
	if (isExactlyDivisible(position, DIVISOR_OR_FIVE))
	{
		return "Buzz";
	}
	return "";
}

string FizzBuzzResolver::multipleOfSeven(int position)
{
	if (isExactlyDivisible(position, DIVISOR_OR_SEVEN))
	{
		return "Pong";
	}
	return "";
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

void FizzBuzzResolver::fizzBuzzAndPingPong(int position)
{
	string multipleOfTwoResult = multipleOfTwo(position);
	string multipleOfThreeResult = multipleOfThree(position);
	string multipleOfFiveResult = multipleOfFive(position);
	string multipleOfSevenResult = multipleOfSeven(position);

	bool isAllEmpty = multipleOfThreeResult == "" && multipleOfFiveResult == "" 
		 && multipleOfTwoResult == "" && multipleOfSevenResult == "";

	cout << multipleOfThreeResult << multipleOfFiveResult << multipleOfTwoResult << multipleOfSevenResult;

	if (isAllEmpty)
	{
		cout << position;
	}
	cout << " "; 
}

void FizzBuzzResolver::showFizzBuzzAndPingPong()
{
	initArray();
}



