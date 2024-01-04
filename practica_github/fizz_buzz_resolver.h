#pragma once
#include <iostream>

using namespace std;

const int SIZE = 100;
const int DIVISOR_OR_THREE = 3;
const int DIVISOR_OR_FIVE = 5;

class FizzBuzzResolver
{
private:
	int first100NumberList[SIZE];
	void initArray();
	string multipleOfThreeAndFive(int position); 
	string multipleOfThree(int position);
	string multipleOfFive(int position);
	bool isExactlyDivisible(int position, int divisor);
	void fizzBuzz(int position);

public:
	void showFizzBuzz();
};

