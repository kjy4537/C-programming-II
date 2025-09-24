//학번 : 202511213
//이름 : 김정윤
//프로그램 명 : 문자열의 검색
//날짜 : 2025년 9월 24일

#include <stdio.h>


int main()
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.');
	if (p != NULL)
		printf("file extension: %s|n", p + 1);

	p = strstr(filename, ".txt");
	if (p != NULL)
		printf("file type: TEXT file|n");

	return 0;

}