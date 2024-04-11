#include "Harl.hpp"

Harl::Harl( void ){

	return ;
}

Harl::~Harl( void ){

	return ;
}

void	Harl::debug( void ){

	std::cout << "I love having extra bacon for my burger. I really do!" << std::endl;
	return ;
}

void	Harl::info( void ){

	std::cout << "I cannot believe adding extra bacon costs more money!" << std::endl;
	return ;
}

void	Harl::warning( void ){

	std::cout << "I've been coming for years! I should deserve it for free!" << std::endl;
	return ;
}

void	Harl::error( void ){

	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level){

	int		i = 0;
	void	(Harl::*funcPtrArray[4])(){&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};	
	
	while (level != msgList[i] && i < 4)
		i++;
	switch (i) {

		case 0 :
		(this->*funcPtrArray[i])();
		complain("INFO");
		break;

		case 1 :
		(this->*funcPtrArray[i])();
		complain("WARNING");
		break;

		case 2 :
		(this->*funcPtrArray[i])();
		complain("ERROR");
		break;

		case 3 :
		(this->*funcPtrArray[i])();
		break;

		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return ;
}
