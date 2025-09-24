//학번 : 202511213
//이름 : 김정윤
//프로그램 명: 문자열의 비교
//날짜 2025년 9월 24일

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10

int main()
{
	char s1[SIZE] = "apple";
	char s2[SIZE] = "apple";
	char password[SIZE];

		if (strcmp(s1, s2) == 0)
			printf("same string|n");

			printf("패스워드? ");
			scanf_s("%s", password);
			if (strcmp(password, "abcd1234") == 0)
				printf("login succeeded|n");
			else
				printf("login failel|n");

			return 0;




}