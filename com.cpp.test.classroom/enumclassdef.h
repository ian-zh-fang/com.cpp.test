#pragma once

enum class TypeRoom :unsigned int
{
	//教室
	Class_Room = 0x00,
	//自习室
	Self_Study_Room = 0x01,
	//社团活动室
	Team_Active_Room = 0x02,
	//会议室
	Conference_Room = 0x04,
	//其它
	Others = 0x08,
};

enum class StatusCamera :unsigned int
{
	//还没有
	NO_YET = 0x00,
	//有一个
	ONLY_ONE = 0x01,
	//两个或者更多
	TOW_OR_MORE = 0x02,
};

enum class StatusHeating :unsigned int
{
	//还没有
	NO_YET = 0x00,
	//有一个
	ONLY_ONE = 0x01,
	//两个或者更多
	TOW_OR_MORE = 0x02,
};