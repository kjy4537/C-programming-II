// 학번 : 202511213
// 이름 : 김정윤
// 프로그램 명 : 구조체 포인터의 활용
// 날짜 : 2025년 10월 1일

#include <stdio.h>
#include <string.h>

#define STR_SIZE 20
typedef struct contact
{
	char name[STR_SIZE];
	char phone[STR_SIZE];
	int ringtone;
} CONTACT;

int main()
{
	CONTACT arr[] = {
	
		{"김석진", "01011112222", 0},
		{"전정국", "01012345678", 1},
		{"박지민", "01077778888", 2},
		{"김남준", "01098765432", 9},
		{"민윤기", "01011335577", 5},
		{"정호석", "01024682468", 7},
		{"김태형", "01099991111", 3}

	};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;
	char name[STR_SIZE];
	int index;
	CONTACT* recent = NULL;

	while (1)
	{
		printf("이름(. 입력 시 종료)? ");
		scanf("%s", name);
		if (strcmp(name, ".") == 0)
			break;

		index = -1;
		for (i = 0; i < size; i++)
		{
			if (strcmp(arr[i].name, name) == 0)
			{
				index = i;
				break;
			}
		}
		if (index >= 0)
		{
			printf("%s의 전화번호 %s로 전화를 겁니다....|n",
				arr[index].name, arr[index].phone);
			recent = &arr[index];

		}
		else
		{
			printf("연락처를 찾을 수 없습니다.|n");

		}

	}

	if (recent)
		printf("최근 통화: %s %s|n", recent->name, recent->phone);

	return 0;

}