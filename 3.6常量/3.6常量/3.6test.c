#define _CRT_SECURE_NO_WARNINGS
//����
//���泣��
// const���εĳ�����
//#define����ı�ʶ������
//ö�ٳ���

//std�Ǳ�׼��i��input��o��output

//1.���泣��
//2.const���εĳ�����
//3.#define����ı�ʶ������
//4.ö�ٳ���



#include<stdio.h>    
//int main()    //1.���泣��
//{
	//30;
	//'w';//�ַ�
	//"abc";//�ַ���


//2.const���εĳ�����
	//const int a = 10;//const����
	//a = 20;
	//	printf("%d\n", a);

	//const int n = 10;         //const���εı��������Ǳ����������޸ģ���Ϊ�г���������
	//int arr[n] = { 0 };

	//return 0;
//}


//3.#define����ı�ʶ�������������޸�
//#define ada 100        //��ada����str����define����ķ���
//#define str "axcv"
//int main()
//{
//	printf("%d\n", ada);
//	int a = ada;
//		printf("%d\n", a);
//		printf("%s\n", str);//%s�Ǵ�ӡ�ַ�����
//}


//4.ö�ٳ���
//enum Color//enumö�ٹؼ���
//{
//	Red,//��ûʹ�ã�ֻ�Ƿ��Ŷ��ѣ�δʹ�ÿռ�
//	Green,
//	Blue
//};

//int main()
//{
//	enum Color c =Red;//ʹ������
//	return 0;     //��������ʱ�����������ڴ�����ռ�
//}



#include<string.h>
//�ַ���+ת���ַ�+ע��
//int main()
//{
//	//char �ַ�����
//	//'a'�ַ�
//	//"asdf"�ַ�����C����û���ַ�������
//	char arr1[] = "dfrtyhvh";//�ַ�����β��\0,�����ֶ���\0ʹarr2��ӡ��ȷ,\0��ת���ַ�
//	char arr2[] = { 'd','f','r','t','y','\0'};
//	int len=strlen(arr1);//���ַ������ȵ�һ���⺯����ʹ�������ͷ�ļ�string.h�����᷵��һ��ֵ����Ҫ����һ����������ֵ
//	int len2=strlen(arr2);
//	printf("%d\n", len);
//	printf("%d\n", len2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//ת���ַ�
//\? ��ֹ����ӡ������ĸ�ʣ�����
//\'��ӡ������
//\"��ӡ����
//\\��ʾб��
//\t��ʾˮƽ�Ʊ����tab�����ͬ
//\ddd  ddd��ʾ1-3���˽�������
//\xdd  dd��ʾ2��ʮ����������

int main()
{
	printf("abc\n");//���ַ�������ֱ�Ӵ�ӡ�����β��ܡ�%s��ӡ
	printf("%c\n",'\'');
	printf("%c\n",'\?');
	printf("asdfg\tghjkl");
	printf("asdfg\\ghjkl");
    printf("abc\nd\tf");
	printf("%c\n", '\130');
	printf("%c\n", '\x60');//asc��ͽ���ת��
	printf("\a");
	printf("%d\n", strlen("c:\test\628\test.c"));//\tЧ�����ĸ��ո񣬵�����һ���ַ���8����8����������һ���ַ�
		return 0;
}