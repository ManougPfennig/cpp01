#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name){

	this->_name = name;
	return ;
}

Zombie::~Zombie(void){

	std::cout << this->_name << ": Died" << std::endl;
	return ;
}

void	Zombie::annonce (void){

	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
