#include "Weapon.hpp"

Weapon::Weapon(void){

	std::cout << "Weapon constructed" << std::endl;
	return ;
}

Weapon::Weapon(std::string type){

	this->setType(type);
	std::cout << "Weapon constructed: " << type << std::endl;
	return ;
}

Weapon::~Weapon(void){

	std::cout << "Weapon destroyed: " << this->getType() << std::endl;
	return ;
}

void	Weapon::setType(std::string type){

	this->_type = type;
	return ;
}

const std::string	Weapon::getType(void){

	return (this->_type);
}
