#include "Sed.hpp"

void sed_line(std::ifstream* inFile, std::ofstream* outFile, std::string needle, std::string replacement)
{
	std::string line;
	std::string out_line;
	while(std::getline(*inFile, line))
	{
		size_t pos = 0;
		while (pos != std::string::npos)
		{
			pos = line.find(needle);
			if (pos == std::string::npos)
				break;
			line = line.substr(0, pos) + replacement + line.substr(pos + needle.length(), line.length());
		}
		out_line += line + "\n";
	}
	*outFile << out_line.substr(0, out_line.length() - 1);
}