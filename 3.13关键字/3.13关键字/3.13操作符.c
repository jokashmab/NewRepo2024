#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//int a = 7 / 2;//�������˶���������ִ�е�������������ֻҪһ���Ǹ�������ִ�и�����
	//float c = 7 / 2.0;
	//int b = 7 % 2;
	//printf("%d\n", a);
	//printf("%.1f\n", c);//.���֣�ȷ��λ��
	//printf("%d\n", b);//ȡģ������������ֻ��������
	//return 0;

	//int a = 0;//��ʼ��
	//a = 10;//��ֵ
	
	
	//sizeof
	//int a = 10;
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);//�ֽ�

	//int arr[10] = { 0 };



//���߼�������
//0Ϊ��

//++��--
	//int a = 10;
	//int b = a++;//++���ã���ʹ��a��ֵ����++
	////int b=a,a=a+1

	int a = 10;
	int b = ++a;//+++ǰ�ã���++����ʹ��
	//a=a+1��b=a

	int c = 10;
	//int d = c--;
	int d = --c;
	printf("%d\n", d);
	printf("%d\n", c);
	return 0;

}