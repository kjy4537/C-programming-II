//학번 : 202511213
//이름 : 김정윤
//프로그램 명: 문자열의 입출력
//날짜 : 2025년 9월 24일

int main()
{
	char in_str[128];
	char out_str[128];
	int hour = 12, min = 30, sec = 45;

	printf("문자열? ");
	gets_s(in_str, sizeof(in_str));
	puts(in_str);
	sprintf(out_str, "%02d:%02d:%02d", hour, min, sec);
	puts(out_str);
	return 0;
}