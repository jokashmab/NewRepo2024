#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 20;
//	int* b = &a;
//	printf("%p\n",b);
//	*b = 15;//解引用操作符，通过b的地址找到b指向的对象
//	int* c = &a;
//	printf("%p\n", c);
//	printf("%d\n", a);
//	return 0;
//}

//指针的大小
int main()
{
	int a = 1;
	printf("%d\n", sizeof(int*));
	return 0;
}