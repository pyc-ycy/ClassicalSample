// ClassicalSample.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Test.h"

void example1()
{
	cout << "有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？" << endl;
	cout << "如下：" << endl;
	int i, j, k;
	for (i = 1; i < 5; i++) { // 以下为三重循环
		for (j = 1; j < 5; j++) {
			for (k = 1; k < 5; k++) { // 确保i、j、k三位互不相同
				if (i != k && i != j && j != k) {
					cout << i << "," << j << "," << "k" << endl;
				}
			}
		}
	}
}

int main()
{
	char a[5] = "abcd";
	Test t1, t2(12, 13), t3(2, 3, "Demo class");
	t1.setA(3);
	t1.setB(6);
	t1.setStr("C++ programing");
	t1.setArr(a, 5);
	t2.setArr(a, 5);
	t3.setArr(a, 5);
	t1.display();
	t2.display();
	t3.display();
	example1();
}