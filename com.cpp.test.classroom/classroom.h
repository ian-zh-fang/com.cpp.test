#pragma once

#include <iostream>
#include <string>
#include "enumclassdef.h"

using namespace std;

class ClassRoom
{
public:
	ClassRoom();
	ClassRoom(const char*);
	~ClassRoom();

	TypeRoom GetRoomType()const;

	static int add(const ClassRoom*);
	static int query();

	std::string toString()
	{
		return nullptr;
	}
protected:
	unsigned int flagInit = 0;				//此标识内部成员变量是否完成初始化：0-尚未完成；1-已完成初始化。

private:

	unsigned int typeRoom = 0;				//房屋类型：0-教室；1-自习室；2-社团活动室；3-会议室；4-其它。
	string roomID;						//房屋编号，房屋在系统中的唯一编号。
	string buildingName;				//大楼名称，例如教学大楼A。
	string roomName;					//房屋名称，例如A102。
	unsigned int containers = 0;			//屋内容纳的最大人数。
	unsigned int chair_desks = 0;			//屋内桌椅套数量。
	unsigned int hasCamera = 0;				//有无投影设备：0-还没有；1-有一个；2-有两个或者更多。
	float area = 0.00L;						//当前房屋占用面积，单位（㎡）。
	unsigned int hasHeating = 0;			//有无供暖设备：0-还没有；1-有一个；2-有两个或者更多。

	void read(const char*);				//首先从缓存数据中读取指定编号的房屋信息，如果缓存中不存在，那么从文件中读取指定房屋编号的信息，并将读取的房屋信息加入缓存。
};

