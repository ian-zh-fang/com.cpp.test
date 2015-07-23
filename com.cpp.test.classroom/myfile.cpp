#include "myfile.h"

MyFile::MyFile()
{
}

MyFile::~MyFile()
{
}

std::ofstream MyFile::save(const std::string filename)
{
	std::ofstream f_out(filename);
	return f_out;
}

std::ifstream MyFile::read(const std::string filename)
{
	std::ifstream f_in(filename);
	return f_in;
}
