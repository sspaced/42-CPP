#include "Sed.hpp"

void sed_line(std::ifstream* inFile, std::ofstream* outFile, std::string needle, std::string replacement)
{
    std::string line;
    while (std::getline(*inFile, line))
    {
        if (needle.empty()) {
            *outFile << line << std::endl;
            continue;
        }

        size_t pos = 0;
        while (pos != std::string::npos)
        {
            pos = line.find(needle, pos);
            if (pos == std::string::npos)
                break;
            line = line.substr(0, pos) + replacement + line.substr(pos + needle.length());
            pos += replacement.length();
        }
        *outFile << line << std::endl;
    }
}