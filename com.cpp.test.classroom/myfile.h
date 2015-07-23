#pragma once

#include <string>
#include <fstream>

class MyFile
{
public:
	MyFile();
	~MyFile();

	static std::ofstream save(const std::string);
	static std::ifstream read(const std::string);

private:

};