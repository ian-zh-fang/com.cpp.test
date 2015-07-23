
#include <iostream>
#include "utility.h"
#include "classroom.h"

using namespace std;

int main(int arg, char* args[])
{
	ClassRoom room;
	cout << (unsigned int)room.GetRoomType() << endl;

	Utility::exit();
}