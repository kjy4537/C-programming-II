//학번 : 202511213
//이름 : 김정윤
//프로그램 명 : 문자열의 교환
//날짜 : 2025년 9월 24일


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 32

int main()
{
	char str1[SIZE] = "";
	char str2[SIZE] = "";
	char temp[SIZE];

	printf("2개의 문자열? ");
	scanf_s("%s %s", str1, str2);
	printf("str1 = %s, str2 = %s|n", str1, str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("str1 = %s, str2 = %s|n", str1, str2);

	return 0;


}