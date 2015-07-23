#include "mystore.h"

const string MyStore::DATAFILENAME("data/tmp.xml");

MyStore::MyStore()
{
	
}

MyStore::~MyStore()
{
}

string MyStore::fileName() const
{
	return DATAFILENAME;
}

int MyStore::saveEntity(ClassRoom* room)
{
	std::ofstream ocout = MyFile::save(room->toString());
	ocout.close();
	return 0;
}

ClassRoom * MyStore::queryEntity(std::string roomNameOrBuildingName)
{
	return nullptr;
}
