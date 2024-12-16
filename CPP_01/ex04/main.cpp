#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		std::cout << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	else
	{
		std::ifstream inFile(argv[1]);
		if (!inFile.is_open())
		{
			std::cout << "Error: Cannot open file " << argv[1] << std::endl;
			return 1;
		}

		std::ofstream outFile((std::string(argv[1]) + ".replace").c_str());
		if (!outFile.is_open())
		{
			std::cout << "Error: Cannot create output file" << std::endl;
			inFile.close();
			return 1;
		}

		sed_line(&inFile, &outFile, std::string(argv[2]), std::string(argv[3]));

		inFile.close();
		outFile.close();
	}
	return (0);
}