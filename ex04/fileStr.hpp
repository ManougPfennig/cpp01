#ifndef FILESTR_H
# define FILESTR_H

#include <iostream>
#include <fstream>
#include <string>


class	fileStr {

private:

		std::string	_str;

public:

		fileStr( void ); // Default constructor
		fileStr( std::string fileName); // Constructor takes a file name amd writes all content to _str
		~fileStr( void ); // Default destructor

		std::string			fileToStr( std::string fileName );
		void				strToFile( std::string newFileName );
		void				replace( std::string occurence, std::string replace );
};

#endif