#include <stdio.h>

void JHLGuguDan(int columns);

void JHLInfo()//정보 출력
{
	printf("+=============================================================+\n");
	printf("|C 프로그래밍 중간고사 1번 문제                               |\n");
	printf("|날짜 : 2013년 5월 3일                                        |\n");
	printf("|학번 : 2013136127                                            |\n");
	printf("|이름 : 주혜린(JHL)                                           |\n");
	printf("+=============================================================+\n");
	printf("|제목 : 구구단 보기 좋게 출력하기                             |\n");
	printf("+-------------------------------------------------------------+\n");
	printf("|한 줄에 출력할 구구단 단의 수를 입력 받아                    |\n");
	printf("|2단부터 9단까지의 구구단을 보기 좋게 출력함                  |\n");
	printf("+-------------------------------------------------------------+\n");
}
int main ()
{
	int i;
	int num;//출력할 단의 개수를 입력하기 위한 변수

	JHLInfo();

	printf("한 줄에 출력할 단의 개수 =");
	scanf("%d", &num);//한 줄에 출력할 단의 개수 입력

	JHLGuguDan(num);

	getchar();
	getchar();
	return 0;
}

void JHLGuguDan(int columns)
{
	int i;
	int count=1;

	for(i=2; i<=9; i++){//2단부터 9단까지 출력
		count++;
		printf("%d X 1 = %3d%c", i, 1*i, (count % columns) ? ' ' : '\n');
		printf("%d X 2 = %3d%c", i, 2*i, (count % columns) ? ' ' : '\n');
		printf("%d X 3 = %3d%c", i, 3*i, (count % columns) ? ' ' : '\n');
		printf("%d X 4 = %3d%c", i, 4*i, (count % columns) ? ' ' : '\n');
		printf("%d X 5 = %3d%c", i, 5*i, (count % columns) ? ' ' : '\n');
		printf("%d X 6 = %3d%c", i, 6*i, (count % columns) ? ' ' : '\n');
		printf("%d X 7 = %3d%c", i, 7*i, (count % columns) ? ' ' : '\n');
		printf("%d X 8 = %3d%c", i, 8*i, (count % columns) ? ' ' : '\n');
		printf("%d X 9 = %3d%c", i, 9*i, (count % columns) ? ' ' : '\n');
	}
}