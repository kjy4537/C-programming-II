// �й� : 202511213
// �̸� : ������
// ���α׷� �� : ����ü �迭�� �˻�
// ��¥ : 2025�� 10�� 1��

#include <stdio.h>
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
		{"�輮��", "01011112222", 0},
		{"������", "01012345678", 1},
		{"������", "01077778888", 2},
		{"�賲��", "01098765432", 9},
		{"������", "01011335577", 5},
		{"��ȣ��", "01024682468", 7},
		{"������", "01099991111", 3}

	};

	int size = sizeof(arr) / sizeof(arr[0]);
	int i;
	char name[STR_SIZE];
	int index;

	printf("�̸�? ");
	scanf("%s", name);

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
		printf("%s�� ��ȭ��ȣ: %s|n", arr[index].name, arr[index].phone);
	}
	else
	{
		printf("����ó�� ã�� �� �����ϴ�.|n");
	}
	return 0;

}