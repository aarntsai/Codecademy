#include <iostream>

int main() {
	int y = 0;

	std::cout << "enter year: ";
	std::cin >> y;

	if (y < 1000 || y > 9999) {

		std::cout << "Thats not a valid year for my programing skill level\n";
	}

	else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {

		std::cout << y;
		std::cout << " is a leap year.\n";

	}
	else {

		std::cout << y;
		std::cout << " is not a leap year.\n";

	}
}