#include <iostream>
#include "HumanB.hpp"


HumanB::HumanB(std::string name){

	this->_name = name;
	this->currentWeapon = NULL;
	std::cout << "HumanB constructed: " << this->getName() << std::endl;
	return ;
}

HumanB::~HumanB(void){

	std::cout << "HumanB destroyed: " << this->getName() << std::endl;
	return;
}

void	HumanB::attack(void){

	if (this->currentWeapon)
		std::cout << this->getName() << " attacks with their weapon " << this->getWeapon() << std::endl;
	else
		std::cout << this->getName() << " attacks with their fists, i guess ? " << std::endl;
	return ;
}

void	HumanB::setName(std::string name){

	this->_name = name;
	return ;
}

const std::string	HumanB::getName(void){

	return (this->_name);
}

void	HumanB::setWeapon(Weapon &newWeapon){

	this->currentWeapon = &newWeapon;
	return ;
}

const std::string	HumanB::getWeapon(void){

	return(this->currentWeapon->getType());
}
