/********************************************************************
	created:	2006/08/09
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Memento模式的测试代码
*********************************************************************/

#include "Memento.h"

int main()
{
	// 创建一个原发器
	Originator* pOriginator = new Originator("old state");
	pOriginator->PrintState();

	// 创建一个备忘录存放这个原发器的状态
	Memento *pMemento = pOriginator->CreateMemento();
	
	// 更改原发器的状态
	pOriginator->SetState("new state");
	pOriginator->PrintState();

	// 通过备忘录把原发器的状态还原到之前的状态
	pOriginator->RestoreState(pMemento);
	pOriginator->PrintState();

	delete pOriginator;
	delete pMemento;

	return 0;
}
