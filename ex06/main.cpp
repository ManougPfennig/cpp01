#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl		harl;
	std::string	str;

	if (ac >= 2)
	{
		str = av[1];
		harl.complain(str);
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
