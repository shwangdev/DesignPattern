/********************************************************************
	created:	2006/08/06
	filename: 	Strategy.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Strategy模式的演示代码
*********************************************************************/

#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy;

class Context
{
public:
	Context(Strategy *pStrategy);
	~Context();

	void ContextInterface();
private:
	Strategy* m_pStrategy;
};

class Strategy
{
public:
	virtual ~Strategy(){}

	virtual void AlgorithmInterface() = 0;
};

class ConcreateStrategyA
	: public Strategy
{
public:
	virtual ~ConcreateStrategyA(){}

	virtual void AlgorithmInterface();
};

#endif
