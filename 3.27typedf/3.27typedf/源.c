#define _CRT_SECURE_NO_WARNINGS


//关键字typedef类型定义（重命名）
//typedef unsigned int uint;
//int main()
//{
//	unsigned int num = 10;//无符号整形
//	uint num1 = 2;
//	return 0;
//}

//关键字static，静态的
//修饰局部变量

#include<stdio.h>
void test()
{
	static int a = 1;
	a++;
	printf("%d ", a);
}

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}