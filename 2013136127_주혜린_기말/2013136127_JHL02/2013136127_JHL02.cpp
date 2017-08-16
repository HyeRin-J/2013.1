#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int JHLReturn();

void JHLInfo()//정보 출력
{
	printf("****************************************\n");
	printf("*C 프로그래밍 기말고사 2번 문제\n");
	printf("*	날짜 : 2013년 6월 12일\n");
	printf("*	학번 : 2013136127\n");
	printf("*	이름 : 주혜린(JHL)\n");
	printf("*\n");
	printf("*	제목 : 2) 주사위 던지기 시뮬레이션\n");
	printf("*****************************************\n");
}

int main ()
{
	int num[13]={0};//각 합별로 배열 지정
	srand(time(NULL));
	int n;//몇 번 던질지
	int i, j;//반복문
	int sum;//주사위 합계
	int avg=0;//비율

	JHLInfo();

	printf("number of tries = ");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		sum=JHLReturn();//sum값에 주사위 합계 저장
		switch(sum){//sum값에 따라 카운트 증가
			case 2:
				num[2]++;
				break;
			case 3:
				num[3]++;
				break;
			case 4:
				num[4]++;
				break;
			case 5:
				num[5]++;
				break;
			case 6:
				num[6]++;
				break;
			case 7:
				num[7]++;
				break;
			case 8:
				num[8]++;
				break;
			case 9:
				num[9]++;
				break;
			case 10:
				num[10]++;
				break;
			case 11:
				num[11]++;
				break;
			case 12:
				num[12]++;
				break;
		}
	}

	printf("=======Result========\n");

	for(i=2; i<13; i++){//2부터 12까지 출력
		avg=(((float)num[i]/n)*400)/1;//평균값*4
		printf("[%2d]: %4d ", i, num[i]);
		for(j=avg; j>=1; j--){//평균값만큼 *출력
			printf("*");
		}
		printf("\n");
	}

	getchar();
	getchar();
	return 0;
}

int JHLReturn()//주사위의 합을 리턴하는 함수
{
	int num1, num2;//각 주사위 숫자
	int sum;//주사위의 합계

	num1=rand()%6+1;//1번 주사위
	num2=rand()%6+1;//2번 주사위

	sum=num1+num2;//두 주사위의 합

	return sum;//합 리턴
}