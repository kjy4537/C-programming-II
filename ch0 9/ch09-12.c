//�й� : 202511213
//�̸� : ������
//���α׷� �� : 2���� ���� �迭�� ���� �� �ʱ�ȭ
//��¥ : 2025�� 9�� 24��

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char books[5][30] =
	{
		"wonder",
		"me before you",
		"the hunger games",
		"twilight",
		"harry potter",

	};
	int i = 0;

	for (i = 0; i < 5; i++)
		printf("å ����: %s|n", books[i]);

	for (i = 0; i < 5; i++)
	{
		if (islower(books[i][0]))
			books[i][0] = toupper(books[i][0]);

	}
	puts("<< ���� �� >>");
	for (i = 0; i < 5; i++)
		printf("å ����: %s|n", books[i]);
	return 0;

}