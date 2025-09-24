//학번 : 202511213
//이름 : 김정윤
//프로그램 명 : 문자열의 토큰 나누기
//날짜: 2025년 9월 24일

#include <stdio.h>

int main()
{
	char phone[] = "02-123-4567";
	char* p = NULL;


	p = strtok(phone, "-");
	printf("area code: %s|n", p);
	p = strtok(NULL, "-");
	printf("prefix: %s|n", p);
	p = strtok(NULL, "-");
	printf("line number: %s|n", p);

	return 0;
}