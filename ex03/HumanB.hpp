#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB {

private :

		std::string	_name;
		Weapon		*currentWeapon;

public :

		HumanB(std::string name); // Constructor with argument
		~HumanB( void ); // Default destructor

		void				attack( void );
		void				setName( std::string name );
		const std::string	getName( void );
		void				setWeapon(Weapon &newWeapon);
		const std::string	getWeapon( void );

};

#endif