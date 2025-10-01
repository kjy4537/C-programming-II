// 학번 : 202511213
// 이름 : 김정윤
// 프로그램 명 : 구조체를 값으로 전달하는 경우
// 날짜 : 2025년 10월 1일

#include <stdio.h>
typedef struct point
{
	int x, y;
} POINT;

void print_point(POINT pt);

int main()
{
	POINT arr[] = {
		{0,0}, {10,10}, {20,20}, {30,30}, {40,40},

	};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < sz; i++)
	{
		print_point(arr[i]);
		printf(" ");
	}
	pintf("|n");

	return 0;
}

void print_point(POINT pt)
{
	printf("(%d, %d)", pt.x, pt.y);

}