//�й� : 202511213
//�̸� : ������
//���α׷� �� : count_space �Լ��� ����
//��¥ : 2025�� 9�� 24��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count_space(const char* s);

int main()
{
	char str[64] = "this program/ttsets const pointer to sting|n";

	puts(str);
	printf("���� ������ ����: %d|n", count_space(str));
	return 0;


}
int count_space(const char* s)
{
	int count = 0;
	while (s[0] != '|0')
	{
		if (isspace(s[0]))
			count++;
		s++;

	}
	return count;

}