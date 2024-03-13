#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void main()
//{
//	printf("hehe");
//  return 0;
//}


//int main()
//{
//	printf("hehe\n");
//	return 0;    	                      //
//}


//int a=100
//int main()
//{
//	int a=100                             //全局变量和局部变量同名时，局部变量优先。
//}


void main()
{
	int num1 = 0;//先定义一个变量，num1是变量名（随意）scanf是输入，printf是输出
	int num2 = 0;
    scanf("%d %d",& num1,& num2);//&是指向内存地址，指向这个变量内存地址所在的空间.取地址。%d表示符号十进制整数。如果不想用scanf_s，在第一行加define（c4996错误）#define _CRT_SECURE_NO_WARNINGS，scanf_s是vs编译器提供的函数
	int sum = num1 + num2;
	printf("%d\n", sum);
}

//变量的作用域
//1.全局变量
//全局变量作用范围是整个工程
// 
//2.局部变量
//局部变量作用域是局部变量所在范围{}
// 

//变量的生命周期
//局部变量
//进入作用域生命周期开始，出作用域生命周期结束
//全局变量
//整个程序的生命周期

//int main()
//{
//	int a = 100;
//	{
//			printf("%d\n", a);
//	}
//	printf("%d\n", a);
//}



//extern int num;//(extern)声明来自外部的符号
//void test()
//{
//	printf("test-->%d\n", num);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", num);
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}