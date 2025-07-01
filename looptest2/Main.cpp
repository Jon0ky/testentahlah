#include <iostream>

int main()
{
	// get a value from the user
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	// print the value doubled
	std::cout << input << " +1 = " << input + 1 << '\n';

	return 0;
}