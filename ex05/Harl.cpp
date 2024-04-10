#include "Harl.hpp"

Harl::Harl( void ){

	std::cout << "A Harl arrives to the register..." << std::endl;
	return ;
}

Harl::~Harl( void ){

	std::cout << "Harl leaves the restaurant screaming profanities..." << std::endl;
	return ;
}

void	Harl::debug( void ){

	std::cout << "I love having extra bacon for my burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(std::string level){

	std::cout << "I cannot believe adding extra bacon costs more money!" << std::endl;
	return ;
}

void	Harl::warning(std::string level){

	std::cout << "I've been coming for years! I should deserve it for free!" << std::endl;
	return ;
}

void	Harl::error(std::string level){

	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level){

	return ;
}