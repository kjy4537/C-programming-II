//�й� : 202511213
//�̸� : ������
//���α׷� �� : ���ڿ��� ����
//��¥ : 2025�� 9�� 24��

int main()
{
	char sentence[100] = "";
	char word[20];

	do
	{
		printf("�ܾ�? ");
		scanf_s("%s", word);
		strcat(sentence, word);
		strcat(sentence, " ");
	} while (strcmp(word, ".") != 0);

	ptintf("%s|n", sentence);

	return 0;

}