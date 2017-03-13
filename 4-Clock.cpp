#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::string sHours, sMinutes;
	std::getline(std::cin, sHours, ':');
	std::getline(std::cin, sMinutes);
	
	int iHours = std::stoi(sHours);
	int iMinutes = std::stoi(sMinutes);

	double angle = std::abs(0.5 * (60 * iHours - 11 * iMinutes));

	std::cout << ((angle > 180) ? 360 - angle : angle);

    return 0;
}

