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
//	int a=100                             //ȫ�ֱ����;ֲ�����ͬ��ʱ���ֲ��������ȡ�
//}


void main()
{
	int num1 = 0;//�ȶ���һ��������num1�Ǳ����������⣩scanf�����룬printf�����
	int num2 = 0;
    scanf("%d %d",& num1,& num2);//&��ָ���ڴ��ַ��ָ����������ڴ��ַ���ڵĿռ�.ȡ��ַ��%d��ʾ����ʮ�������������������scanf_s���ڵ�һ�м�define��c4996����#define _CRT_SECURE_NO_WARNINGS��scanf_s��vs�������ṩ�ĺ���
	int sum = num1 + num2;
	printf("%d\n", sum);
}

//������������
//1.ȫ�ֱ���
//ȫ�ֱ������÷�Χ����������
// 
//2.�ֲ�����
//�ֲ������������Ǿֲ��������ڷ�Χ{}
// 

//��������������
//�ֲ�����
//�����������������ڿ�ʼ�����������������ڽ���
//ȫ�ֱ���
//�����������������

//int main()
//{
//	int a = 100;
//	{
//			printf("%d\n", a);
//	}
//	printf("%d\n", a);
//}



//extern int num;//(extern)���������ⲿ�ķ���
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