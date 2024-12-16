#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <stdlib.h>
#include <fstream>

void sed_line(std::ifstream* inFile, std::ofstream* outFile, std::string needle, std::string replacement);

#endif