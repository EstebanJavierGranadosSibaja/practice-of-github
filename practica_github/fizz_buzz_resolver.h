#pragma once
#include <iostream>

using namespace std;

const int SIZE = 100;
const int DIVISOR_OR_TWO = 2;
const int DIVISOR_OR_THREE = 3;
const int DIVISOR_OR_FIVE = 5;
const int DIVISOR_OR_SEVEN = 7;

class FizzBuzzResolver
{
private:
	int first100NumberList[SIZE];
	void initArray();
	string multipleOfTwo(int position);
	string multipleOfThree(int position);
	string multipleOfFive(int position);
	string multipleOfSeven(int position);
	bool isExactlyDivisible(int position, int divisor);
	void fizzBuzzAndPingPong(int position);

public:
	void showFizzBuzzAndPingPong();
};

