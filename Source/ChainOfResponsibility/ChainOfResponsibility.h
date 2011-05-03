/********************************************************************
	created:	2006/07/20
	filename: 	ChainOfResponsibility.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	ChainOfResponsibility模式的演示代码
*********************************************************************/

#ifndef CHAINOFRESPONSIBILITY_H
#define CHAINOFRESPONSIBILITY_H

#include <stdio.h>

// 抽象基类,定义一个处理请求的接口
class Handler
{
public:
	Handler(Handler *pSuccessor = NULL);
	virtual ~Handler();

	// 纯虚函数,由派生类实现
	virtual void HandleRequset() = 0;

protected:
	Handler* m_pSuccessor;
};

class ConcreateHandler1
	: public Handler
{
public:
	ConcreateHandler1(Handler *pSuccessor = NULL) : Handler(pSuccessor){}
	virtual ~ConcreateHandler1(){}

	virtual void HandleRequset();
};

class ConcreateHandler2
	: public Handler
{
public:
	ConcreateHandler2(Handler *pSuccessor = NULL) : Handler(pSuccessor){}
	virtual ~ConcreateHandler2(){}

	virtual void HandleRequset();
};

#endif
