//학번 : 202511213
//이름 : 김정윤
//프로그램 명 : count_space 함수의 정의
//날짜 : 2025년 9월 24일

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count_space(const char* s);

int main()
{
	char str[64] = "this program/ttsets const pointer to sting|n";

	puts(str);
	printf("공백 문자의 개수: %d|n", count_space(str));
	return 0;


}
int count_space(const char* s)
{
	int count = 0;
	while (s[0] != '|0')
	{
		if (isspace(s[0]))
			count++;
		s++;

	}
	return count;

}