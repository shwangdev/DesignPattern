/********************************************************************
	created:	2006/07/26
	filename: 	FlyWeight.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	FlyWeight模式的演示代码
*********************************************************************/

#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <string>
#include <list>

typedef std::string STATE;

class Flyweight
{
public:
	virtual ~Flyweight(){}

	STATE GetIntrinsicState();
	virtual void Operation(STATE& ExtrinsicState) = 0;

protected:
	Flyweight(const STATE& state) 
		:m_State(state)
	{
	}

private:
	STATE m_State;
};

class FlyweightFactory
{
public:
	FlyweightFactory(){}
	~FlyweightFactory();

	Flyweight* GetFlyweight(const STATE& key);

private:
	std::list<Flyweight*>	m_listFlyweight;
};

class ConcreateFlyweight
	: public Flyweight
{
public:
	ConcreateFlyweight(const STATE& state)
		: Flyweight(state)
	{
	}
	virtual ~ConcreateFlyweight(){}

	virtual void Operation(STATE& ExtrinsicState);
};

#endif
