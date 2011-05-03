/********************************************************************
	created:	2006/08/09
	filename: 	Visitor.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Visitor模式的演示代码
*********************************************************************/

#ifndef VISITOR_H
#define VISITOR_H

class Visitor;

class Element
{
public:
	virtual ~Element(){}

	virtual void Accept(Visitor &rVisitor) = 0;

protected:
	Element(){}
};

class ConcreateElementA
	: public Element
{
public:
	virtual ~ConcreateElementA() {}

	virtual void Accept(Visitor &rVisitor);
};

class ConcreateElementB
	: public Element
{
public:
	virtual ~ConcreateElementB() {}

	virtual void Accept(Visitor &rVisitor);
};

class Visitor
{
public:
	virtual ~Visitor(){}

	virtual void VisitConcreateElementA(ConcreateElementA *pConcreateElementA) = 0;
	virtual void VisitConcreateElementB(ConcreateElementB *pConcreateElementB) = 0;

protected:
	Visitor(){}
};

class ConcreateVisitorA
	: public Visitor
{
public:
	virtual ~ConcreateVisitorA(){}

	virtual void VisitConcreateElementA(ConcreateElementA *pConcreateElementA);
	virtual void VisitConcreateElementB(ConcreateElementB *pConcreateElementB);
};

class ConcreateVisitorB
	: public Visitor
{
public:
	virtual ~ConcreateVisitorB(){}

	virtual void VisitConcreateElementA(ConcreateElementA *pConcreateElementA);
	virtual void VisitConcreateElementB(ConcreateElementB *pConcreateElementB);
};

#endif
 