/********************************************************************
	created:	2006/07/20
	filename: 	Decorator.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Decorator模式的演示代码
*********************************************************************/

#ifndef DECORATOR_H
#define DECORATOR_H

// 抽象基类,定义一个对象接口,可以为这个接口动态的添加职责.
class Component
{
public:
	Component(){}
	virtual ~Component(){}

	// 纯虚函数,由派生类实现
	virtual void Operation() = 0;
};

// 抽象基类,维护一个指向Component对象的指针
class Decorator
	: public Component
{
public:
	Decorator(Component* pComponent) : m_pComponent(pComponent){}
	virtual ~Decorator();

protected:
	Component* m_pComponent;
};

// 派生自Component,在这里表示需要给它动态添加职责的类
class ConcreateComponent
	: public Component
{
public:
	ConcreateComponent(){}
	virtual ~ConcreateComponent(){}

	virtual void Operation();
};

// 派生自Decorator,这里代表为ConcreateComponent动态添加职责的类
class ConcreateDecorator
	: public Decorator
{
public:
	ConcreateDecorator(Component* pComponent) : Decorator(pComponent){}
	virtual ~ConcreateDecorator(){}

	virtual void Operation();

private:
	void AddedBehavior();
};

#endif
