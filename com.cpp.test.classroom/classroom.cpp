#include "classroom.h"

ClassRoom::ClassRoom()
{

}

ClassRoom::ClassRoom(const char * rid)
{
	roomID = string(rid);
}

ClassRoom::~ClassRoom()
{
}

TypeRoom ClassRoom::GetRoomType() const
{
	return (TypeRoom)typeRoom;
}

int ClassRoom::add(const ClassRoom * room)
{
	return 0;
}

int ClassRoom::query()
{
	return 0;
}

void ClassRoom::read(const char * name)
{
}
