#define _CRT_SECURE_NO_WARNINGS
//选择语句if switch
//IF
#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("你吃了吗(1吃了/2没吃)?\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("6");
//	}
//	else
//	{
//		printf("去吃饭吧");
//	}
//	return 0;
//}
//循环语句
//while
//for
//do while


//while
//int main()
//{
//	int line = 0;
//	printf("加入bit");
//
//	while (line < 20000)
//	{
//		printf("写代码\n");
//		line++;//输出加一
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("继续加油");
//	}
//	return 0;
//}




//函数，方便调用
//int Add(int num1, int num2)
//{
//	int z = 0;
//	z = num1 + num2;
//	return z;
//}
// 
// 
//或者这样简洁一些
//int Add(int num1, int num2)
//{
//	return(num1 + num2);//括号可不写
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d%d", &a, &b);
//	//求和
//	//
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//数组，一种相同元素类型的集合
int main()
{
	int arr[10] = { 45,46,47,48,49,50,51,52,53,54 };//数组有下标，有序号从0开始，可以通过下标访问数组
	printf("%d\n",arr[0]);
	int i = 0;
		while (i < 10)
		{
			printf("%d ", arr[i]);
			i = i + 1;//或者写i++
		}
	return 0;
}