#include <stdio.h>

void whoami ()
{
	printf("******************************\n");
	printf("성명 : 주혜린\n");
	printf("학번 : 2013136127\n");
	printf("소속 : 컴퓨터공학부\n");
	printf("******************************\n");
	printf("구구단 \"출력\" 프로그램 Ver.3\n");
	printf("******************************\n");
}

void printHanDan (int dan)//한 단을 출력하는 함수
{
	printf("%d X 1 = %d\n", dan, dan*1);
	printf("%d X 2 = %d\n", dan, dan*2);
	printf("%d X 3 = %d\n", dan, dan*3);
	printf("%d X 4 = %d\n", dan, dan*4);
	printf("%d X 5 = %d\n", dan, dan*5);
	printf("%d X 6 = %d\n", dan, dan*6);
	printf("%d X 7 = %d\n", dan, dan*7);
	printf("%d X 8 = %d\n", dan, dan*8);
	printf("%d X 9 = %d\n", dan, dan*9);
}

int main ()
{
	whoami ();

	printHanDan (2);//2단 출력
	printHanDan (3);//3단 출력
	printHanDan (4);//4단 출력
	printHanDan (5);//5단 출력
	printHanDan (6);//6단 출력
	printHanDan (7);//7단 출력
	printHanDan (8);//8단 출력
	printHanDan (9);//9단 출력

	getchar ();//Enter를 치기 위해
	return 1;
}