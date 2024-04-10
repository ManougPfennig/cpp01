#include "fileStr.hpp"
#include <cstring>

int	check_open(char	*file)
{
	std::ifstream inFile(file);
    if (!inFile.is_open()) {
        std::cerr << "Failed to open file: " << file << std::endl;
        return (1);
    }
	inFile.close();
	return (0);
}

int	parsing(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Unvalid amount of arguments\n";
	for (int i = 0; av[i]; ++i)
		if (strlen(av[i]) < 1)
		{
			std::cout << "Empty argument\n";
			return (1);
		}
	if (ac == 4 && check_open(av[1]) == 0)
		return (0);
	return (1);
}

int	main(int ac, char **av)
{

	//Quick parsing
	if (parsing(ac, av))
	{
		std::cout << "./noSed <filename> <toReplace> <replaceWith>" << std::endl;
		return (0);
	}

	//Convert elements to std::strings
	std::string fileName = av[1];
	std::string	occurence = av[2];
	std::string	replace = av[3];

	//Construct object fileStr and copy the file's content to a string
	fileStr temp(fileName);

	//Iterate on string
	temp.replace(occurence, replace);

	//Write to new file (file.replace)
	temp.strToFile(fileName + ".replace");

	return (0);
}
