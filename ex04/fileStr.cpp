#include "fileStr.hpp"

fileStr::fileStr(void){

	this->_str.clear();
	return ;
}

fileStr::fileStr(std::string fileName){

	this->_str.clear();
	this->_str = fileToStr(fileName);
	return ;
}

fileStr::~fileStr(void){

	return ;
}

// Copies the content of a file (parameter: fileName) to a string and returns it
std::string fileStr::fileToStr(std::string fileName){

	std::ifstream	inFile(fileName);
	std::string		line;
	std::string		str;

	while (std::getline(inFile, line)) {
        str += line + "\n";
    }
	return (str);
}

// Takes _str content and writes it to new file (creates it if nonexistent)
void	fileStr::strToFile(std::string newFileName){

	std::ofstream outfile (newFileName);
	outfile << this->_str;
	outfile.close();
	return ;
}

// Same as std::string.replace() but better because it's mine
void	fileStr::replace(std::string occurence, std::string replace){

	for (int pos = 0; pos < this->_str.length(); ++pos)
	{
		pos = this->_str.find(occurence, pos);
		if (pos < 0)
			break;
		this->_str.erase(pos, occurence.length());
		this->_str.insert(pos, replace);
		pos += replace.length() - 1;
	}
	return ;
}
