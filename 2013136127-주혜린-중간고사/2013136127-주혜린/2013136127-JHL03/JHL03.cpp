#include <stdio.h>

void JHL01(int n);

void JHLInfo()//정보 출력
{
	printf("+=============================================================+\n");
	printf("|C 프로그래밍 중간고사 3번 문제                               |\n");
	printf("|날짜 : 2013년 5월 3일                                        |\n");
	printf("|학번 : 2013136127                                            |\n");
	printf("|이름 : 주혜린(JHL)                                           |\n");
	printf("+=============================================================+\n");
	printf("|제목 : 수열 구하기                                           |\n");
	printf("+-------------------------------------------------------------+\n");
}

int main ()
{
	int n;

	JHLInfo();
	printf("수열 출력의 개수 = ");
	scanf("%d", &n);

	printf("반복문으로 구현\n");
	JHL01(n);


	getchar();
	getchar();
	return 0;
}

void JHL01(int n)
{
	int p2=2;
	int p1=1;
	int p0=0;
	int result;

	int i;

	for(i=3; i<=n; i++)
	{
		result=p0+p1+p2;
		p2=p1;
		p1=p0;
		p0=p2;

		printf("[%3d][%40d]\n", i, result);
	}
}