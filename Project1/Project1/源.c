#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	wchar_t str[100];
	wscanf(L"%1s", str);
	wprintf(L"who are you", str);
	wchar_t text2[100];
	wscanf(L"%1s", text2);
	wprintf(L"i don't know", text2);
	return 0;
}