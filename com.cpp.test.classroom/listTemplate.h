#pragma once

/**
采用模板的双向链表基础类
*/
template <class Type>
class ListTemp
{
public:
	virtual int count() const = 0;
	virtual int insert(const Type&, int) = 0;
	virtual int append(const Type&) = 0;
	virtual int findIndex(const Type&) = 0;
	virtual Type& prev() const = 0;
	virtual Type& next() const = 0;
	virtual Type& removeAt(int) const = 0;
	virtual Type* clear() = 0;
};