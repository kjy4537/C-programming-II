// 학번 : 202511213
// 이름 : 김정윤
// 프로그램 명 : 구조체 변수의 비교
// 날짜 : 2025년 10월 1일

#include <stdio.h>
#include <string.h>

struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
};

int  main()
{
	struct contact ct1 = { "전정국", "01012345678", 1 };
	struct contact ct2 = ct1;

	if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0
		&& ct1.ringtone == ct2.ringtone)
		printf("ct1과 ct2의 값이 같습니다.|n");
	else
		printf("ct1과 ct2의 값이 같지 않습니다.|n");
	return 0;


}