// 학번 : 202511213
// 이름 : 김정윤
// 프로그램 명 : 구조체의 정의
// 날짜 : 2025년 10월 1일

#include <stdio.h>

struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
};

int main()
{
	printf("contact 구조체의 크기 = %d|n", sizeof(struct contact));

	return 0;

	
}
void test()
{
	struct contact c1;

}