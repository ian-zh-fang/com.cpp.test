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
	unsigned int flagInit = 0;				//�˱�ʶ�ڲ���Ա�����Ƿ���ɳ�ʼ����0-��δ��ɣ�1-����ɳ�ʼ����

private:

	unsigned int typeRoom = 0;				//�������ͣ�0-���ң�1-��ϰ�ң�2-���Ż�ң�3-�����ң�4-������
	string roomID;						//���ݱ�ţ�������ϵͳ�е�Ψһ��š�
	string buildingName;				//��¥���ƣ������ѧ��¥A��
	string roomName;					//�������ƣ�����A102��
	unsigned int containers = 0;			//�������ɵ����������
	unsigned int chair_desks = 0;			//����������������
	unsigned int hasCamera = 0;				//����ͶӰ�豸��0-��û�У�1-��һ����2-���������߸��ࡣ
	float area = 0.00L;						//��ǰ����ռ���������λ���O����
	unsigned int hasHeating = 0;			//���޹�ů�豸��0-��û�У�1-��һ����2-���������߸��ࡣ

	void read(const char*);				//���ȴӻ��������ж�ȡָ����ŵķ�����Ϣ����������в����ڣ���ô���ļ��ж�ȡָ�����ݱ�ŵ���Ϣ��������ȡ�ķ�����Ϣ���뻺�档
};

