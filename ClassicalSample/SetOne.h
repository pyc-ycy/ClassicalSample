#pragma once
#include <stdio.h>

// һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
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
��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿

�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬��������������������·ݴ���3ʱ�迼�Ƕ��һ�졣
*/
void example4()
{
	int day, month, year, sum = 0, leap;
	printf("�������ꡢ�¡��գ���ʽΪ���꣬�£��գ�2015��12��10��\n");
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
	printf("������һ��ĵ�%d�졣\n", sum);
}
/*
��Ŀ��������������x,y,z���������������С���������

���������������취����С�����ŵ�x�ϣ��Ƚ�x��y���бȽϣ����x>y��x��y��ֵ���н�����Ȼ������x��z���бȽϣ����x>z��x��z��ֵ���н�����������ʹx��С��
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
	��Ŀ����*�������ĸC��ͼ����

���������������'*'����ֽ��д����ĸC���ٷ��������
*/
void example6()
{
	printf("use * print a symbol C\n");
	printf(" ****\n");
	printf(" *\n");
	printf(" * \n");
	printf(" ****\n");
}
// �˷���
void example7()
{
	int i, j, result;
	printf("\n");
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			result = i * j;
			printf("%d*%d=%-3d", i, j, result); /*-3d��ʾ����룬ռ3λ*/
		}
		printf("\n"); /*ÿһ�к���*/
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
// ��������������̡�
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