//학번 : 202511213
//이름 : 김정윤
//프로그램 명 :문자 배열의 초기화 및 출력
//날짜 : 2025년 9월 24일

int main()
{
	char str1[10] = { 'a', 'b', 'c' };
	char str2[10] = "abc";
	char str3[] = "abc";
	char str4[10] = "very long string";
	int size = sizeof(str1) / sizeof(str1[0]);
	int i;

	
	printf("str1 =");
	for (i = 0; i < size; i++)
		printf("%c", str1[i]);
	printf("|n");

	printf("str2 = %s|n", str2);

	printf("str3 = ");
	printf(str3);
	printf("|n");

	printf("str4 = %s|n", str4);

	return 0;


}