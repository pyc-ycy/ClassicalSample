#include "Test.h"
#include <iostream>
using namespace std;
Test::Test()
{
}
Test::Test(int a, int b, string str)
{
	this->a = a;
	this->b = b;
	this->str = str;
}
void Test::setA(int a)
{
	this->a = a;
}
void Test::setB(int b)
{
	this->b = b;
}
void Test::setStr(string str)
{
	this->str = str;
}
void Test::setArr(char* s, int len)
{
	this->arr = new char[len];
	int i;
	for (i = 0; i < len - 1; i++)
	{
		this->arr[i] = s[i];
	}
	this->arr[i] = '\0';
}
void Test::display()
{
	cout << "a=" << this->a
		<< ", b=" << this->b
		<< ", str=" << this->str
		<< ", arr=" << this->arr << endl;
}
int Test::getA()
{
	return this->a;
}
int Test::getB()
{
	return this->b;
}
string Test::getStr()
{
	return this->arr;
}
Test::~Test()
{
	delete[] arr;
}