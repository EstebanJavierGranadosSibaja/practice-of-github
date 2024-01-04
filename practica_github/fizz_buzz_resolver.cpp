#include "fizz_buzz_resolver.h"

void FizzBuzzResolver::initArray()
{
	for (int position = 0; position < SIZE; position++)
	{
		first100NumberList[position] = position + 1;
		cout << first100NumberList[position] << " ";
	}
}
