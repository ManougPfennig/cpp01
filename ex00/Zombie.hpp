#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

private :
	std::string	_name;

public :
		Zombie(); // DEFAULT CONSTRUCTOR
		Zombie(std::string name); // CONSTRUCTOR WITH STRING
		~Zombie( void ); // DESTRUCTOR

		void		annonce( void );

};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);



#endif