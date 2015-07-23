#pragma once

#include <string>
#include <msxml.h>
#include "myfile.h"
#include "classroom.h"

using namespace std;
/**
˵��;
	1�����ļ��ж�ȡ���е����ݣ����������ڴ���
	2�����ڴ��е����ݱ��浽�ļ��У������ù̻�������Ӳ����
	3���ļ�������˫���������ʽ�������ڴ���
	4���ڴ��н�����һ�����ȵ����ݣ������ᱣ�����е�����
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
	static const string DATAFILENAME;	//�����ļ����·����Ϣ�������ļ����ƺ��ļ�����
};