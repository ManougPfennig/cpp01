#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA {

private :

		std::string	_name;
		Weapon		&currentWeapon;

public :

		HumanA(std::string name,  Weapon &weaponName); // Constructor with argument
		~HumanA( void ); // Default destructor

		void				attack( void );
		void				setName( std::string name );
		const std::string	getName( void );
		const std::string	getWeapon( void );

};

#endif