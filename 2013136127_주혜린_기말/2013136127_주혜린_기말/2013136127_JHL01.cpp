#include <stdio.h>

void Menu();

void JHLInfo()//정보 출력
{
	printf("****************************************\n");
	printf("*C 프로그래밍 기말고사 1번 문제\n");
	printf("*	날짜 : 2013년 6월 12일\n");
	printf("*	학번 : 2013136127\n");
	printf("*	이름 : 주혜린(JHL)\n");
	printf("*\n");
	printf("|	제목 : 1) 중간고사 문제 다시 구현\n");
	printf("*****************************************\n");
}

int factorial(int n);
int permutation(int n, int c);
int combination(int n, int c);

int main ()
{
	char i;
	int n, c;

	JHLInfo();

	Menu();

	while(1){
		scanf("%s", &i);

		switch(i){
		case 'f'://f의 경우
			printf("n=");
			scanf("%d", &n);

			printf("Factorial<%d>=%d", n, factorial(n));

			break;
		case 'c'://c의 경우
			printf("n c =");
			scanf("%d %d", &n, &c);

			printf("Combination<%d, %d>=%d\n", n, c, combination(n, c));
			break;
		case 'p'://p의 경우
			printf("n c =");
			scanf("%d %d", &n, &c);

			printf("Permutation<%d, %d>=%d\n", n, c, permutation(n, c));
			break;
		case 'q'://q의 경우
			printf("프로그램을 종료합니다\n");
			break;
		default://나머지
			printf("입력이 잘못되었습니다.\n");
			break;
		}
		if(i=='q') break;//q일 경우 프로그램 종료
	}

	getchar();
	getchar();
	return 0;
}

void Menu()
{
	printf("'f'actorial / 'c'ombination / 'p'ermutation / 'q'uit\n");
}


int factorial(int n)// n의 factorial 값을 리턴
{
	if(n<=1) return 1;
	else return (n*factorial(n-1));
}

int permutation(int n, int c)// n! / (n-r)! 값을 리턴
{
	return factorial(n) / factorial(n - c);
}

int combination(int n, int c)// 순열의 값에 r! 의 값을 나눈 값을 리턴
{
	return permutation(n, c) / factorial(c);
}
