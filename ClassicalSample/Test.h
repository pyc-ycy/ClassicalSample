#pragma once
#include <string>
using namespace std;
class Test
{
private:
	int a;
	int b;
	char* arr;
	string str;
public:
	Test();
	Test(int a, int b, string str = "Hello world");
	~Test();
	void setA(int a);
	void setB(int b);
	void setStr(string str);
	void setArr(char* s, int len);
	void display();
	int getA();
	int getB();
	string getStr();
};
