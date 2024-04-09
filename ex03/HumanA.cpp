#include <iostream>
#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weaponName) : _name(name), currentWeapon(weaponName) {

	std::cout << "HumanA constructed: " << this->_name << std::endl;
	return ;
}

HumanA::~HumanA(void){

	std::cout << "HumanA destroyed: " << this->getName() << std::endl;
	return;
}

void	HumanA::attack(void){

	std::cout << this->getName() << " attacks with their weapon " << this->getWeapon() << std::endl;
	return ;
}

void	HumanA::setName(std::string name){

	this->_name = name;
	return ;
}

const std::string	HumanA::getName(void){

	return (this->_name);
}

const std::string	HumanA::getWeapon(void){

	return(this->currentWeapon.getType());
}
