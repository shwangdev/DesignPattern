/********************************************************************
	created:	2006/07/20
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Singleton模式的测试代码
*********************************************************************/

#include "Singleton.h"
#include <stdlib.h>

int main()
{
	// 不用初始化类对象就可以访问了
	Singleton::GetInstancePtr()->Test();
	Singleton::GetInstance().Test();



	return 0;
}