#include <stdio.h>

void whoami();
void menu();
void gradeif(int grade);
void gradeswitch(int grade);
void primenumber(int n);
void triangle(int k);

int main ()
{
	int num;//메뉴입력을 위한 변수
	int grade1;//[1]을 위한 변수
	int grade2;//[2]를 위한 변수
	int n;//[3]을 위한 변수
	int k;//[4]를 위한 변수

	whoami();
	menu();

	while(1)//숫자 입력 반복
	{
		printf("숫자를 입력하세요===>");//각 숫자별로 함수 출력
		scanf("%d", &num);

		while(num>5)//num이 6이상일 경우 출력
		{
			printf("입력이 잘못되었습니다!\n");
			printf("숫자를 입력하세요===>");//num 재입력
			scanf("%d", &num);
			if(num<6) break;//num이 5이하일 경우 다음 문장 출력
		}

		switch(num){
		case 1:
			printf("점수(0~99)를 입력하세요===>");//점수 입력
			scanf("%d", &grade1);

			while(grade1>99)//grade1이 100이상일 경우 출력
			{
				printf("입력이 잘못되었습니다!\n");
				printf("점수(0~99)를 입력하세요===>");//grade1 재입력
				scanf("%d", &grade1);
				if(grade1<100) break;//99이하일 경우 다음 문장 출력
			}
			
			gradeif(grade1);//if 를 사용한 학점 계산 출력
			
			printf("\nPress Enter To Continue\n");
			getchar();
			getchar();
			break;

		case 2:
			printf("점수(0~99)를 입력하세요===>");//점수 입력
			scanf("%d", &grade2);

			while(grade2>99)//grade2이 100이상일 경우 출력
			{
				printf("입력이 잘못되었습니다!\n");
				printf("점수(0~99)를 입력하세요===>");//grade2 재입력
				scanf("%d", &grade2);
				if(grade2<100) break;//99이하일 경우 다음 문장 출력
			}
			
			gradeswitch(grade2);//switch를 사용한 학점 계산 출력
			
			printf("\nPress Enter To Continue\n");
			getchar();
			getchar();
			break;

		case 3:
			printf("2부터 n까지의 소수를 구합니다. n을 입력해주세요===>");//소수를 구하고 싶은 정수 입력
			scanf("%d", &n);

			primenumber(n);//소수를 출력

			printf("\nPress Enter To Continue\n");
			getchar();
			getchar();
			break;

		case 4:
			printf("숫자를 입력하세요===>");//숫자 입력
			scanf("%d", &k);

			triangle(k);//삼각형을 만들어서 출력하는 함수 작성

			printf("\nPress Enter To Continue\n");
			getchar();
			getchar();
			break;

		case 5:
			printf("프로그램을 종료합니다.\n");
			getchar();
		}
		if(num==5) break;//num이 5일경우 while문 종료
	}

		getchar ();
		return 0;
}

void whoami()
{
	printf("******************************************************************\n");
	printf("이름: 주혜린\n학번: 2013136127\n소속: 컴퓨터공학부\n");
	printf("******************************************************************\n");
	printf("2013.04.12.실습과제 05\n");
	printf("******************************************************************\n");
}

void menu ()
{
	printf(" Menu\n");
	printf("[1]학점계산(if)	[2]학점계산(switch)	[3]소수출력\n[4]삼각형만들기	[5]종료\n");
	printf("******************************************************************\n");
}

void gradeif(int grade)//1. 다음 표를 기준으로 점수를 입력 받아 학점을 계산하여 출력하는 함수를 if 문을 이용하여 작성하시오.
{
	if(grade<60){//60미만
		printf("당신의 학점은 F입니다.\n");
	}
	else if(grade<65){//60이상 65미만
		printf("당신의 학점은 D0입니다.\n");
	}
	else if(grade<70){//65이상 70미만
		printf("당신의 학점은 D+입니다.\n");
	}
	else if(grade<75){//70이상 75미만
		printf("당신의 학점은 C0입니다.\n");
	}
	else if(grade<80){//75이상 80미만
		printf("당신의 학점은 C+입니다.\n");
	}
	else if(grade<85){//80이상 85미만
		printf("당신의 학점은 B0입니다.\n");
	}
	else if(grade<90){//85이상 90미만
		printf("당신의 학점은 B+입니다.\n");
	}
	else if(grade<95){//90이상 95미만
		printf("당신의 학점은 A0입니다.\n");
	}
	else{//95이상 100미만
		printf("당신의 학점은 A+입니다.\n");
	}
}

void gradeswitch(int grade)//1. 다음 표를 기준으로 점수를 입력 받아 학점을 계산하여 출력하는 함수를 switch 문을 이용하여 작성하시오.
{
	int point;//switch문을 사용하기 위한 변수

	point=grade/5;

	switch(point){
		case 19://95이상 100미만
			printf("당신의 학점은 A+입니다.\n");
			break;
		case 18://90이상 95미만
			printf("당신의 학점은 A0입니다.\n");
			break;
		case 17://85이상 90미만
			printf("당신의 학점은 B+입니다.\n");
			break;
		case 16://80이상 85미만
			printf("당신의 학점은 B0입니다.\n");
			break;
		case 15://75이상 80미만
			printf("당신의 학점은 C+입니다.\n");
			break;
		case 14://70이상 75미만
			printf("당신의 학점은 C0입니다.\n");
			break;
		case 13://65이상 70미만
			printf("당신의 학점은 D+입니다.\n");
			break;
		case 12://60이상 65미만
			printf("당신의 학점은 D0입니다.\n");
			break;
		default://60미만
			printf("당신의 학점은 F입니다.\n");
			break;
	}

}

void primenumber(int n)//어떤 자연수 n을 입력 받아 2부터 n까지의 소수(prime number)를 찾아 출력하는 함수를 작성하시오.
{
	int number, divisor, count=0;//소수 시작, 나누는 수, 출력갯수

	for(number=2; number<=n; number++)//2부터 n까지 루프
	{
		for(divisor=2;number%divisor;divisor++);//number가 다른 수로 나누어떨어질때까지 루프

		if(number==divisor)//나누어떨어진 수가 자기 자신이라면 소수이다.
		{
			printf("%5d", number);//소수 출력
			
			if(++count%10==0)//소수 10개당 다음 줄로 이동
			{
				printf("\n");
			}
		}
	}
}

void triangle(int n)//어떤 자연수 n을 입력 받아 0부터 그 수까지의 수로 삼각형을 만들어 출력하는 함수를 작성하시오.
{
	int i, j;

	for(i=0; i<=n; i++)
	{
		for(j=n; j>i; j--)//앞의 공백을 입력
		printf(" ");
		
		for(j=i; j>=0; j--)//0까지의 수를 입력
			printf("%d", j);
		
		for(j=1; j<=i; j++)//1부터의 수를 입력
			printf("%d", j);

		printf("\n");//다음줄로 넘김
	}
}