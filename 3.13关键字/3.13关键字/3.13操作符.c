#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
	//int a = 7 / 2;//除号两端都是整数，执行的是整数除法，只要一方是浮点数，执行浮点数
	//float c = 7 / 2.0;
	//int b = 7 % 2;
	//printf("%d\n", a);
	//printf("%.1f\n", c);//.数字，确认位数
	//printf("%d\n", b);//取模（余数。两端只能是整数
	//return 0;


	//int a = 0;//初始化
	//a = 10;//赋值
	
	
	//sizeof
	//int a = 10;
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);//字节

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//整个数组的大小



//！逻辑反操作
//0为假

//++和--
	//int a = 10;
	//int b = a++;//++后置，先使用a的值，后++
	////int b=a,a=a+1

	//int a = 10;
	//int b = ++a;//+++前置，先++，后使用
	////a=a+1，b=a

	//int c = 10;
	////int d = c--;
	//int d = --c;
	//printf("%d\n", d);
	//printf("%d\n", c);
	//return 0;
	


	//强制转换,括号加类型
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}



//==为等于
//int main()
//{
//	int a = 10;
//	if (a = 3)//赋值
//	{
//		printf("hehe");//非零为真
//	}
//	return 0;
//}



int main()
{
	//逻辑与&&，一边为零为假
	//逻辑或||

	/*int a = 0;
	int b = 20;
	if (a && b)
	{
		printf("hehe");
	}*/

	int a = 0;
	int b = 20;
	if (a || b)
	{
		printf("hehe");
	}
	return 0;
}