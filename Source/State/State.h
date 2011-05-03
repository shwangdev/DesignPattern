/********************************************************************
	created:	2006/08/05
	filename: 	State.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	State模式的演示代码
*********************************************************************/

#ifndef STATE_H
#define STATE_H

class State;

class Context
{
public:
	Context(State* pState);
	~Context();
	void Request();
	void ChangeState(State *pState);

private:
	State *m_pState;
};

class State
{
public:
	virtual ~State(){}

	virtual void Handle(Context* pContext) = 0;
};

class ConcreateStateA
	: public State
{
public:
	void Handle(Context* pContext);
};

class ConcreateStateB
	: public State
{
public:
	void Handle(Context* pContext);
};

#endif
