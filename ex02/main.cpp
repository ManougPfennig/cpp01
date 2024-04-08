#include <iostream>

int	main()
{
	std::string brian = "HI THIS IS BRIAN";
	std::string	*stringPTR = &brian;
	std::string	&stringREF = brian;

	std::cout << "address of string variable: " << &brian << "\n";
	std::cout << "address held by pointer: " << stringPTR << "\n";
	std::cout << "address held by reference: " << &stringREF << std::endl;

	std::cout << "value of string variable: " << brian << std::endl;
	std::cout << "value pointed by pointer: " << *stringPTR << std::endl;
	std::cout << "value pointed by reference: " << stringREF << std::endl;
	return (0);
}
