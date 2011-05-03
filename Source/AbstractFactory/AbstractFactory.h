/********************************************************************
	created:	2006/07/19
	filename: 	AbstractFactory.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	AbstractFactory的演示代码
*********************************************************************/

#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

// 抽象基类AbstractProductA,代表产品A的抽象
class AbstractProductA
{
public:
	AbstractProductA() {}
	virtual ~AbstractProductA(){};
};

// 派生类ConcreateProductA1,继承自AbstractProductA,代表产品A的第一种实现
class ConcreateProductA1
	: public AbstractProductA
{
public:
	ConcreateProductA1();
	virtual ~ConcreateProductA1();
};

// 派生类ConcreateProductA2,继承自AbstractProductA,代表产品A的第二种实现
class ConcreateProductA2
	: public AbstractProductA
{
public:
	ConcreateProductA2();
	virtual ~ConcreateProductA2();
};

// 抽象基类AbstractProductB,代表产品B的抽象
class AbstractProductB
{
public:
	AbstractProductB() {}
	virtual ~AbstractProductB(){};
};

// 派生类ConcreateProductB1,继承自AbstractProductB,代表产品B的第一种实现
class ConcreateProductB1
	: public AbstractProductB
{
public:
	ConcreateProductB1();
	virtual ~ConcreateProductB1();
};

// 派生类ConcreateProductB2,继承自AbstractProductB,代表产品B的第二种实现
class ConcreateProductB2
	: public AbstractProductB
{
public:
	ConcreateProductB2();
	virtual ~ConcreateProductB2();
};

// 抽象基类AbstractFactory,工厂的抽象类,生产产品A和产品B
class AbstractFactory
{
public:
	AbstractFactory(){}
	virtual ~AbstractFactory(){}

	virtual AbstractProductA* CreateProductA() = 0;
	virtual AbstractProductB* CreateProductB() = 0;
};

// 派生类ConcreateFactory1,继承自AbstractFactory
// 生产产品A和产品B的第一种实现
class ConcreateFactory1
	: public AbstractFactory
{
public:
	ConcreateFactory1();
	virtual ~ConcreateFactory1();

	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

// 派生类ConcreateFactory2,继承自AbstractFactory
// 生产产品A和产品B的第二种实现
class ConcreateFactory2
	: public AbstractFactory
{
public:
	ConcreateFactory2();
	virtual ~ConcreateFactory2();

	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

#endif