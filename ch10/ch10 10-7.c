// �й� : 202511213
// �̸� : ������
// ���α׷� �� : ����ü ������
// ��¥ : 2025�� 10�� 1��

#include <stdio.h>

typedef struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
} CONTACT;

int main()
{
	CONTACT ct = { "�輮��", "01011112222", 0 };
	CONTACT* p = &ct;

	p->ringtone = 5;
	strcpy(p->phone, "01011112223");
	printf("��    ��: %s|n", p->name);
	printf("��ȭ��ȣ: %s|n", p->phone);
	printf("�� �� ��: %d|n", p->ringtone);

	return 0;
}