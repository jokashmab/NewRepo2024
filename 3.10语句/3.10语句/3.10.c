#define _CRT_SECURE_NO_WARNINGS
//ѡ�����if switch
//IF
#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("�������(1����/2û��)?\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("6");
//	}
//	else
//	{
//		printf("ȥ�Է���");
//	}
//	return 0;
//}
//ѭ�����
//while
//for
//do while


//while
//int main()
//{
//	int line = 0;
//	printf("����bit");
//
//	while (line < 20000)
//	{
//		printf("д����\n");
//		line++;//�����һ
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("��������");
//	}
//	return 0;
//}




//�������������
//int Add(int num1, int num2)
//{
//	int z = 0;
//	z = num1 + num2;
//	return z;
//}
// 
// 
//�����������һЩ
//int Add(int num1, int num2)
//{
//	return(num1 + num2);//���ſɲ�д
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d%d", &a, &b);
//	//���
//	//
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//���飬һ����ͬԪ�����͵ļ���
int main()
{
	int arr[10] = { 45,46,47,48,49,50,51,52,53,54 };//�������±꣬����Ŵ�0��ʼ������ͨ���±��������
	printf("%d\n",arr[0]);
	int i = 0;
		while (i < 10)
		{
			printf("%d ", arr[i]);
			i = i + 1;//����дi++
		}
	return 0;
}