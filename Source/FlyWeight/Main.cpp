/********************************************************************
	created:	2006/07/26
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	FlyWeight模式的测试代码
*********************************************************************/

#include "FlyWeight.h"

int main()
{
	FlyweightFactory flyweightfactory;
	flyweightfactory.GetFlyweight("hello");
	flyweightfactory.GetFlyweight("world");
	flyweightfactory.GetFlyweight("hello");


	return 0;
}
