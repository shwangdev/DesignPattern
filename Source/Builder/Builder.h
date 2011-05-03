/********************************************************************
	created:	2006/07/19
	filename: 	Builder.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Builder模式的演示代码
*********************************************************************/

#ifndef BUILDER_H
#define BUILDER_H

// 虚拟基类,是所有Builder的基类,提供不同部分的构建接口函数
class Builder
{
public:
	Builder(){};
	virtual ~Builder(){}

	// 纯虚函数,提供构建不同部分的构建接口函数
	virtual void BuilderPartA() = 0;
	virtual void BuilderPartB() = 0;
};

// 使用Builder构建产品,构建产品的过程都一致,但是不同的builder有不同的实现
// 这个不同的实现通过不同的Builder派生类来实现,存有一个Builder的指针,通过这个来实现多态调用
class Director
{
public:
	Director(Builder* pBuilder);
	~Director();

	void Construct();

private:
	Builder* m_pBuilder;
};

// Builder的派生类,实现BuilderPartA和BuilderPartB接口函数
class ConcreateBuilder1
	: public Builder
{
public:
	ConcreateBuilder1(){}
	virtual ~ConcreateBuilder1(){}

	virtual void BuilderPartA();
	virtual void BuilderPartB();
};

// Builder的派生类,实现BuilderPartA和BuilderPartB接口函数
class ConcreateBuilder2
	: public Builder
{
public:
	ConcreateBuilder2(){}
	virtual ~ConcreateBuilder2(){}

	virtual void BuilderPartA();
	virtual void BuilderPartB();
};

#endif