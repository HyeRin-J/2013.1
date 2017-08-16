#include <stdio.h>

void whoami ()
{
	printf("******************************\n");
	printf("성명 : 주혜린\n");
	printf("학번 : 2013136127\n");
	printf("소속 : 컴퓨터공학부\n");
	printf("******************************\n");
	printf("구구단 \"출력\" 프로그램 Ver.2\n");
	printf("******************************\n");
}
int main ()
{
	whoami ();

	int i;//for를 위해 변수 선언
	
	for (i=2; i<10; i++)//2단 출력
	{
		printf("2 X %d = %d\n", i, 2*i);
	}
	for (i=2; i<10; i++)//3단 출력
	{
		printf("3 X %d = %d\n", i, 3*i);
	}
	for (i=2; i<10; i++)//4단 출력
	{
		printf("4 X %d = %d\n", i, 4*i);
	}
	for (i=2; i<10; i++)//5단 출력
	{
		printf("5 X %d = %d\n", i, 5*i);
	}
	for (i=2; i<10; i++)//6단 출력
	{
		printf("6 X %d = %d\n", i, 6*i);
	}
	for (i=2; i<10; i++)//7단 출력
	{
		printf("7 X %d = %d\n", i, 7*i);
	}
	for (i=2; i<10; i++)//8단 출력
	{
		printf("8 X %d = %d\n", i, 8*i);
	}
	for (i=2; i<10; i++)//9단 출력
	{
		printf("9 X %d = %d\n", i, 9*i);
	}
	getchar ();//Enter를 치기 위해
	return 1;
}