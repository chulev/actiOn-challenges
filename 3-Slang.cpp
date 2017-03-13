#include <iostream>
#include <string>
#include <set>

int main()
{
	int N;

	std::cin >> N;

	std::cin.ignore();

	for (int i = 0; i < N; i++) {
		std::string word;
		std::set<std::string> substringSet;

		std::getline(std::cin, word);

		int wordLength = word.length();

		for (int j = 0; j < wordLength; ++j) {
			for (int k = j + 1; k <= wordLength; ++k) {
				substringSet.insert(word.substr(0, j) + word.substr(k));
			}
		}

		std::cout << substringSet.size() - 1 << std::endl;
	}

    return 0;
}

