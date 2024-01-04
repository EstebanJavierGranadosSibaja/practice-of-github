#include "fizz_buzz_resolver.h"

void FizzBuzzResolver::initArray()
{
	for (int position = 0; position < SIZE; position++)
	{
		first100NumberList[position] = position + 1;
		fizzBuzz(first100NumberList[position]);
	}
}

string FizzBuzzResolver::multipleOfThreeAndFive(int position)
{
	bool isMultipleOfThreeAndFive = isExactlyDivisible(position, DIVISOR_OR_THREE) &&
		isExactlyDivisible(position, DIVISOR_OR_FIVE);
	if (isMultipleOfThreeAndFive)
	{
		return " FIZZBUZZ ";
	}
	
	return "";
}

string FizzBuzzResolver::multipleOfThree(int position)
{
	if (isExactlyDivisible(position, DIVISOR_OR_THREE))
	{
		return " Fizz ";
	}
	return "";
}

string FizzBuzzResolver::multipleOfFive(int position)
{
	if (isExactlyDivisible(position, DIVISOR_OR_FIVE))
	{
		return " Buzz ";
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

void FizzBuzzResolver::fizzBuzz(int position)
{
	string threeAndFive = multipleOfThreeAndFive(position);
	string theree = multipleOfThree(position);
	string five = multipleOfFive(position);
	bool isAllEmpty = threeAndFive == "" && theree == "" && five == "";

	if (threeAndFive != "")
	{
		cout << threeAndFive;
		return;
	}
	cout << theree; 
	cout << five; 

	if (isAllEmpty)
	{
		cout << position << " ";
	}
}

void FizzBuzzResolver::showFizzBuzz()
{
	initArray();
}



