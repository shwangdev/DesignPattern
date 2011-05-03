/********************************************************************
	created:	2006/07/20
	filename: 	Singleton.h
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Singleton模式的演示代码
*********************************************************************/

#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
	Singleton(){};
	~Singleton(){};

	// 静态成员函数,提供全局访问的接口
	static Singleton* GetInstancePtr();
	static Singleton  GetInstance();

	void Test();

private:
	// 静态成员变量,提供全局惟一的一个实例
	static Singleton* m_pStatic;
};

#endif