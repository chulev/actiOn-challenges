#include <iostream>
#include <string>

int main()
{
	int N;
	std::cin >> N;

	std::cin.ignore();

	std::string hallway;
	std::getline(std::cin, hallway);

	int leftCount = 0;
	int rightCount = 0;

	int hallwayLength = hallway.length();

	for (int i = 0; hallway[i] != 'E' && i < hallwayLength; ++i) {
		if (hallway[i] == '#')
			++leftCount;
	}

	for (int i = hallwayLength - 1; hallway[i] != 'E' && i >= 0; --i) {
		if (hallway[i] == '#')
			++rightCount;
	}

	std::cout << ((leftCount < rightCount) ? leftCount : rightCount);

    return 0;
}

