#include <iostream>
#include <array>

int main()
{
	std::array<int, 4> numbers;

	for (int i = 0; i < 4; i++)
	{
		numbers[i] = i;
	}

//	std::cout << numbers[0] << std::endl;
//	std::cout << numbers[1] << std::endl;
//	std::cout << numbers[2] << std::endl;
//	std::cout << numbers[3] << std::endl;

	int* ptr_numbers = &numbers[0];
	
	for (int i = 0; i < 4; i++)
	{
		std::cout << *ptr_numbers << std::endl;
		++ptr_numbers;

	}
	
	return 0;
}