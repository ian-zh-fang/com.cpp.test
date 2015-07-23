#pragma once

#include <string>
#include <msxml.h>
#include "myfile.h"
#include "classroom.h"

using namespace std;
/**
说明;
	1，从文件中读取所有的数据，并保存在内存中
	2，将内存中的数据保存到文件中，并永久固化到物理硬盘中
	3，文件数据以双向链表的形式保存在内存中
	4，内存中将保存一定长度的数据，并不会保存所有的数据
*/
class MyStore
{
public:
	MyStore();
	~MyStore();

	string fileName() const;
	int saveEntity(ClassRoom*);
	ClassRoom* queryEntity(std::string);

private:
	static const string DATAFILENAME;	//数据文件相对路径信息，包含文件名称和文件类型
};