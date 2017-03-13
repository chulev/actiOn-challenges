#include <iostream>
#include <algorithm>

void printNumber(int number[]) {
	unsigned long long decimalRepresentation = 0ULL;

	for (int i = 0; i < 64; ++i)
		decimalRepresentation = 2 * decimalRepresentation + number[i];

	std::cout << decimalRepresentation;
}

int main()
{
	int N;
	std::cin >> N;

	int number[64] = { 0 };

	for (int i = 1; i <= 8; ++i) 
		number[64 - i] = 1;

	for (int i = 1; i < N; ++i) 
		std::next_permutation(number, number + 64);

	printNumber(number);

	return 0;
}

