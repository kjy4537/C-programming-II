//�й� : 202511213
//�̸� : ������
//���α׷� �� : ���ڿ��� �˻�
//��¥ : 2025�� 9�� 24��

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