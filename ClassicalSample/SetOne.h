#pragma once
#include <stdio.h>

// 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
void example3()
{
	int  i, j, m, n, x;
	for (i = 1; i < 168 / 2 + 1; i++)
	{
		if (168 % i == 0)
		{
			j = 168 / i;
			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
			{
				m = (i + j) / 2;
				n = (i - j) / 2;
				x = n * n - 100;
				printf("%d + 100 = %d * %d\n", x, n, n);
				printf("%d + 268 = %d * %d\n", x, m, m);
			}
		}
	}
}
/*
题目：输入某年某月某日，判断这一天是这一年的第几天？

程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。
*/
void example4()
{
	int day, month, year, sum = 0, leap;
	printf("请输入年、月、日，格式为：年，月，日（2015，12，10）\n");
	scanf_s("%d,%d,%d", &year, &month, &day);
	switch (month)
	{
	case 1:sum = 0; break;
	case 2:sum = 31; break;
	case 3:sum = 59; break;
	case 4:sum = 90; break;
	case 5:sum = 120; break;
	case 6:sum = 151; break;
	case 7:sum = 181; break;
	case 8:sum = 212; break;
	case 9:sum = 243; break;
	case 10:sum = 273; break;
	case 11:sum = 304; break;
	case 12:sum = 334; break;
	default:printf("data error"); break;
	}
	sum += day;
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		leap = 1;
	}
	else {
		leap = 0;
	}
	if (leap == 1 && month > 2)
	{
		sum++;
	}
	printf("这是这一年的第%d天。\n", sum);
}
/*
题目：输入三个整数x,y,z，请把这三个数由小到大输出。

程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。
*/
void example5()
{
	int x, y, z;
	printf("please input three number(format as x,y,z):\n");
	scanf_s("%d,%d,%d", &x, &y, &z);
	int t;
	if (x > y)
	{
		t = x;
		x = y;
		y = t;
	}
	if (x > z)
	{
		t = x;
		x = z;
		z = t;
	}
	if (y > z)
	{
		t = y;
		y = z;
		z = t;
	}
	printf("three number order from min to max:%d %d %d", x, y, z);
}
/*
	题目：用*号输出字母C的图案。

程序分析：可先用'*'号在纸上写出字母C，再分行输出。
*/
void example6()
{
	printf("use * print a symbol C\n");
	printf(" ****\n");
	printf(" *\n");
	printf(" * \n");
	printf(" ****\n");
}
// 乘法表
void example7()
{
	int i, j, result;
	printf("\n");
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			result = i * j;
			printf("%d*%d=%-3d", i, j, result); /*-3d表示左对齐，占3位*/
		}
		printf("\n"); /*每一行后换行*/
	}
}
void example8()
{
	char a = 176, b = 219;
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", a, a, b, a, a);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
}
// 输出国际象棋棋盘。
void example9()
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			if ((i + j) % 2 == 0)
				printf("%c%c", 219, 219);
			else printf("  ");
		printf("\n");
	}
}