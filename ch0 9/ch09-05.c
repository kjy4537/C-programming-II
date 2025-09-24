//학번 : 202511213
//이름 : 김정윤
//프로그램 명 : 문자열의 연결
//날짜 : 2025년 9월 24일

int main()
{
	char sentence[100] = "";
	char word[20];

	do
	{
		printf("단어? ");
		scanf_s("%s", word);
		strcat(sentence, word);
		strcat(sentence, " ");
	} while (strcmp(word, ".") != 0);

	ptintf("%s|n", sentence);

	return 0;

}