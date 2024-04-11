#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << std::endl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	std::cout << std::endl;

	harl.complain("DEBUG");
	harl.complain("DEBUG");
	harl.complain("DEBUG");
	harl.complain("DEBUG");
	harl.complain("DEBUG");
	std::cout << std::endl;

	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("INFO");
	std::cout << std::endl;

	harl.complain("WARNING");
	harl.complain("WARNING");
	harl.complain("WARNING");
	harl.complain("WARNING");
	harl.complain("WARNING");
	std::cout << std::endl;

	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("ERROR");
	std::cout << std::endl;

	harl.complain("HELLO");
	harl.complain("OTHER");
	harl.complain("NOTHING");
	harl.complain("");
	harl.complain("GOODBYE");
	std::cout << "\n" << std::endl;
	return (0);
}