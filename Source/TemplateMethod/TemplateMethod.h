/********************************************************************
	created:	2006/07/20
	filename: 	TemplateMethod.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	TemplateMethod模式的演示代码
*********************************************************************/

// 抽象基类,定义算法的轮廓
class AbstractClass
{
public:
	AbstractClass(){}
	virtual ~AbstractClass(){}

	// 这个函数中定义了算法的轮廓
	void TemplateMethod();

protected:
	// 纯虚函数,由派生类实现之
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
};

// 继承自AbstractClass,实现算法
class ConcreateClass
	: public AbstractClass
{
public:
	ConcreateClass(){}
	virtual ~ConcreateClass(){}

protected:
	virtual void PrimitiveOperation1();
	virtual void PrimitiveOperation2();
};
