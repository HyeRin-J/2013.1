#include <stdio.h>

void whoami();
void menu();
double temp(int temp);
double compound (int a, int N, double r);
double simple(int a, int N, double r);
void interest(int a, int N, double r);
int sum1(int num);
int sum2(int num);


int main ()
{
	int num1;//menu 입력
	int i;//[1] 온도 입력을 위한 변수
	int a, N;//[2] 원금, 기간
	double r;//[2] 이자율
	int num;//[3] 자연수 N

	whoami();
	menu();

	do//반복문
	{
		printf("숫자를 입력해주세요==>");
		scanf("%d", &num1);

		while(num1>4)//5이상 입력시 출력
		{
			printf("입력이 잘못되었습니다. 숫자를 입력해 주세요==>");
			scanf("%d", &num1);//num1 재입력
			if(num1<5) break;//num1이 4이하일 경우 반복문 빠져나옴
		}

		switch(num1)//num1 값에 따른 각각의 함수 출력
		{
		case 1://num1=1
			printf("[1]섭씨 온도를 화씨 온도로 변환하는 함수를 만들고, 섭씨 영하 20도에서 영상 50도 까지 5도 마다 섭씨와 이에 대한 화씨 온도를 출력하시오.\n");

			for(i=-20; i<=50; i=i+5)//-20도부터 5도씩 50도까지 출력
				printf("섭씨 %d도 ==> 화씨 %lf도\n", i, temp(i));
			
			printf("Press Enter to continue\n");
			getchar();
			getchar();
			break;
		case 2://num1=2
			printf("[2]원금, 이자율, 기간(년)을 입력하면 단리 계산 총액과 복리 계산 총액이 출력되도록 하시오.\n");
			printf("원금을 입력하세요==>");
			scanf("%d", &a);
			printf("이자율을 입력하세요==>");
			scanf("%lf", &r);
			printf("기간을 입력하세요==>");
			scanf("%d", &N);

			interest(a, N, r);//복리, 단리 출력
			
			printf("Press Enter to continue\n");
			getchar();
			getchar();
			break;
		case 3://num1=3
			printf("[3]자연수 N을 입력받아 1부터 N까지의 합을 구하는 함수\n");

			printf("1부터 N까지의 합을 출력합니다. N을 입력해주세요==>");
			scanf("%d", &num);

			printf("(반복문)1부터 %d까지의 합은 %d입니다.\n", num, sum1(num));//반복문을 이용하여 합 출력
			printf("(재귀함수)1부터 %d까지의 합은 %d입니다.\n", num, sum2(num));//재귀함수를 이용하여 합 출력

			printf("Press Enter to continue\n");
			getchar();
			getchar();
			break;
		case 4://num1=4
			printf("프로그램을 종료합니다.\n");
			break;
		}
	}while(num1<4);//num1>3일 경우 반복문 빠져나옴

	getchar();
	getchar();
	return 0;
}

void whoami()
{
	printf("************************************************\n");
	printf("학번: 2013136127\n소속: 컴퓨터공학부\n이름: 주혜린\n");
	printf("************************************************\n");
	printf("2013.04.19.실습과제06\n");
	printf("************************************************\n");
}

void menu()
{
	printf("[1] 온도 변환	[2] 이자계산	[3] 1부터의 합	[4] 종료\n");
}

double temp(int Ctemp)//[1] 온도 변환
{
	double Ftemp;//화씨 온도

	Ftemp=Ctemp*1.8+32;//C=(5/9)(F-32), F=1.8*C-32

	return Ftemp;//Ftemp값 반환
}

double compound(int a, int N, double r)//[2] 복리계산
{
	double S;//복리합계
	int i;//for를 위한 변수

	S=a;//복리합계=원금

	for(i=1; i<=N; i++)//i=N까지 루프
		S=S*(1+r);

	return S;//S값 반환
}

double simple(int a, int N, double r)//단리 합계
{
	double S;//단리 합계

	S=a*(1 + r * N);
	
	return S;//S값 반환
}

void interest(int a, int N, double r)
{
	printf("복리는 %lf, 단리는 %lf입니다.\n", compound(a, N, r), simple(a, N, r));
}

int sum1(int num)//반복문을 이용한 합
{
	int sum=0;//합계 초기화
	int i;//for 를 위한 변수

	for(i=1; i<=num; i++)//i=num까지 루프
	{
		sum=sum+i;
	}

	return sum;//sum값 반환
}
int sum2(int num)//재귀함수를 이용한 합
{
	int sum=0;//합계 초기화

	if(num>0)//num<=0까지 루프
	{
		sum=num+sum2(num-1);
	}

	return sum;//sum값 반환
}