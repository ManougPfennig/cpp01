#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>

class Harl{

private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

		void	(Harl::*funcPtrArray[4])();
		
public:

		Harl( void );
		~Harl( void );

		void	complain( std::string level );

		const std::string	msgList[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
};	

#endif