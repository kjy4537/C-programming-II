//�й� : 202511213
//�̸� : ������
//���α׷� �� : swap_string �Լ��� ���� �� ȣ��
//��¥ : 2025�� 9�� 24��

#define SIZE 128
int swap_string(char* lhs, char* rhs, int size);

int main()
{
	char str1[SIZE] = "";
	char str2[SIZE] = "";

	printf("���ڿ� 2��? ");
	scanf_s("%s %s", str1, str2);

	printf("str1=%s, str2=%s|n", str1, str2);
	swap_string(str1, str2, SIZE);
	printf("str1=%s, str2=%s|n", str1, str2);
	return 0;
}

int swap_string(char* lhs, char* rhs, int size)
{
	int lhs_len = strlen(lhs);
	int rhs_len = strlen(rhs);
	char temp[SIZE] = "";

	if (lhs_len + 1 > size || rhs_len + 1 > size)
		return 0;

	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);
	return 1;
}