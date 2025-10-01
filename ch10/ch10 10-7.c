// 학번 : 202511213
// 이름 : 김정윤
// 프로그램 명 : 구조체 포인터
// 날짜 : 2025년 10월 1일

#include <stdio.h>

typedef struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
} CONTACT;

int main()
{
	CONTACT ct = { "김석진", "01011112222", 0 };
	CONTACT* p = &ct;

	p->ringtone = 5;
	strcpy(p->phone, "01011112223");
	printf("이    름: %s|n", p->name);
	printf("전화번호: %s|n", p->phone);
	printf("벨 소 리: %d|n", p->ringtone);

	return 0;
}