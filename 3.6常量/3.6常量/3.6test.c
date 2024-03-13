#define _CRT_SECURE_NO_WARNINGS
//常量
//字面常量
// const修饰的常变量
//#define定义的标识符常量
//枚举常量

//std是标准，i是input，o是output

//1.字面常量
//2.const修饰的常变量
//3.#define定义的标识符常量
//4.枚举常量



#include<stdio.h>    
//int main()    //1.字面常量
//{
	//30;
	//'w';//字符
	//"abc";//字符串


//2.const修饰的常变量
	//const int a = 10;//const修饰
	//a = 20;
	//	printf("%d\n", a);

	//const int n = 10;         //const修饰的变量本质是变量。不能修改，因为有常量的属性
	//int arr[n] = { 0 };

	//return 0;
//}


//3.#define定义的标识符常量，不能修改
//#define ada 100        //“ada”“str”是define定义的符号
//#define str "axcv"
//int main()
//{
//	printf("%d\n", ada);
//	int a = ada;
//		printf("%d\n", a);
//		printf("%s\n", str);//%s是打印字符串的
//}


//4.枚举常量
//enum Color//enum枚举关键字
//{
//	Red,//还没使用，只是符号而已，未使用空间
//	Green,
//	Blue
//};

//int main()
//{
//	enum Color c =Red;//使用类型
//	return 0;     //创建变量时本质是在向内存申请空间
//}



#include<string.h>
//字符串+转义字符+注释
//int main()
//{
//	//char 字符类型
//	//'a'字符
//	//"asdf"字符串，C语言没有字符串类型
//	char arr1[] = "dfrtyhvh";//字符串结尾带\0,可以手动加\0使arr2打印正确,\0是转义字符
//	char arr2[] = { 'd','f','r','t','y','\0'};
//	int len=strlen(arr1);//求字符串长度的一个库函数（使用需包含头文件string.h），会返回一个值，需要定义一个变量接受值
//	int len2=strlen(arr2);
//	printf("%d\n", len);
//	printf("%d\n", len2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//转义字符
//\? 防止被打印成三字母词？？）
//\'打印单引号
//\"打印符号
//\\表示斜杠
//\t表示水平制表符和tab结果相同
//\ddd  ddd表示1-3个八进制数字
//\xdd  dd表示2个十六进制数字

int main()
{
	printf("abc\n");//仅字符串可以直接打印，整形不能。%s打印
	printf("%c\n",'\'');
	printf("%c\n",'\?');
	printf("asdfg\tghjkl");
	printf("asdfg\\ghjkl");
    printf("abc\nd\tf");
	printf("%c\n", '\130');
	printf("%c\n", '\x60');//asc码和进制转换
	printf("\a");
	printf("%d\n", strlen("c:\test\628\test.c"));//\t效果是四个空格，但是是一个字符，8不是8进制数，是一个字符
		return 0;
}