#include <stdio.h>

void whoami ()
{
	printf("******************************\n");
	printf("성명 : 주혜린\n");
	printf("학번 : 2013136127\n");
	printf("소속 : 컴퓨터공학부\n");
	printf("******************************\n");
	printf("구구단 \"출력\" 프로그램 Ver.4\n");
	printf("******************************\n");
}

void printGugu (int dan)//dan을 입력받아 1부터 9까지의 곱을 출력하는 함수
{
	int i;//for를 위해 변수 선언

	for(i=1; i<10; i++)//1부터 9까지 루프
	{
		printf("%d X %d = %d\n", dan, i, dan*i);
	}
}

int main ()
{
	whoami ();

	int i;//for를 위해 변수 선언

	for(i=2; i<10; i++)//printGugu 함수에 dan을 입력하는 함수
	{
		printGugu (i);
	}

	getchar ();//Enter를 치기 위해
	return 1;
}