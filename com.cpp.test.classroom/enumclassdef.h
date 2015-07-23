#pragma once

enum class TypeRoom :unsigned int
{
	//����
	Class_Room = 0x00,
	//��ϰ��
	Self_Study_Room = 0x01,
	//���Ż��
	Team_Active_Room = 0x02,
	//������
	Conference_Room = 0x04,
	//����
	Others = 0x08,
};

enum class StatusCamera :unsigned int
{
	//��û��
	NO_YET = 0x00,
	//��һ��
	ONLY_ONE = 0x01,
	//�������߸���
	TOW_OR_MORE = 0x02,
};

enum class StatusHeating :unsigned int
{
	//��û��
	NO_YET = 0x00,
	//��һ��
	ONLY_ONE = 0x01,
	//�������߸���
	TOW_OR_MORE = 0x02,
};