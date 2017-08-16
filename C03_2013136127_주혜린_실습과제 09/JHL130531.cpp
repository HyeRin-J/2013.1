#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Info()//정보
{
	printf("+---------------------------------------------------------------------+\n");
	printf("|               2013.05.31 C 프로그래밍 I 실습 과제 09                |\n");
	printf("|                       학번 : 2013136127                             |\n");
	printf("|                       소속 : 컴퓨터공학부                           |\n");
	printf("|                       이름 : 주혜린                                 |\n");
	printf("+---------------------------------------------------------------------+\n");
}

int findMax(float avg[]);
int findMin(float avg[]);

int main ()
{
	srand(time(NULL));//난수 시드 무작위
	int i, j, k;//for를 위한 변수
	int score [40][8];//각 과제 점수
	int scoresum [8]={0};//과제별 총점
	float scoreavg [8]={0};//과제별 평균
	int sum [40]={0};//총점
	float avg [40]={0};//평균
	int num [40];//학번
	char name [40][7]={//이름 지정
		"김영일", "김영이", "김영삼", "김영사", "김영오", "김영육", "김영칠", "김영팔", "김영구", "김일영",
		"김일일", "김일이", "김일삼", "김일사", "김일오", "김일육", "김일칠", "김일팔", "김일구", "김이영",
		"김이일", "김이이", "김이삼", "김이사", "김이오", "김이육", "김이칠", "김이팔", "김이구", "김삼영",
		"김삼일", "김삼이", "김삼삼", "김삼사", "김삼오", "김삼육", "김삼칠", "김삼팔", "김삼구", "김사영"
	};
	int allsum=0;//전체 총점
	float allavg=0;//전체 평균

	Info();

	for(i=0; i<40; i++){//학번 입력
		num [i]=(2013136001+i);
	}

	printf("   학번     이름      1    2     3     4     5     6     7     8  총점 평균\n");

	//각 정보를 출력
	for(i=0; i<40; i++){
		printf("%d ", num [i]);//학번 출력
		for(j=0; j<7; j++){//이름 출력
			printf("%c", name [i][j]);
		}
		for(k=0; k<8; k++){//각 과제별 성적 출력
			score[i][k]=rand()%101;
			sum[i]+=score[i][k];//합계 계산
			scoresum[k]+=score[i][k];//과제별 합계
			printf("  %3d ", score[i][k]);
		}
		printf(" %3d", sum[i]);//합계 출력
		avg[i]=(float)sum[i]/8;//평균 계산
		printf(" %3.2f", avg[i]);//평균 출력

		allsum+=sum[i];//전체 총점
		allavg+=avg[i];//전체 평균의 합
		printf("\n");
	}

	printf("[과제별 총점]     ");
	for(i=0; i<8; i++)
		printf(" %3d ", scoresum[i]);
	printf("\n");
	printf("[과제별 평균]     ");
	for(i=0; i<8; i++){
		scoreavg[i]=(float)scoresum[i]/40;
		printf(" %3.1f ", scoreavg[i]);
	}
	printf("\n");

	allavg=allavg/40;//전체 평균

	printf("-----------------------------------------------------------------------------\n");
	printf("[전체 평균] 학생수: 40명 총점: %3d점 평균: %3.2f점\n", allsum, allavg);//전체 총점과 전체 평균 출력

	printf("[최고점] %d ", num[findMax(avg)]);//평균이 최고점인 학생의 학번 출력
	for(i=0; i<7; i++){//평균이 최고점인 학생의 이름 출력
		printf("%c", name[findMax(avg)][i]);
	}
	printf("총점: %3d점 평균: %3.2f점\n", sum[findMax(avg)], avg[findMax(avg)]);//평균이 최고점인 학생의 총점과 평균 출력

	printf("[최저점] %d ", num[findMin(avg)]);//평균이 최저점인 학생의 학번 출력
	for(i=0; i<7; i++){//평균이 최저점인 학생의 이름 출력
		printf("%c", name[findMin(avg)][i]);
	}
	printf("총점: %3d점 평균: %3.2f점\n", sum[findMin(avg)], avg[findMin(avg)]);//평균이 최저점인 학생의 총점과 평균 출력

	getchar();
	getchar();

	return 0;
}

int findMax(float avg[])
{
	int i;//반복문
	float Max=avg[0];//최고점 저장
	int Maxposition=0;//최고점의 위치

	for(i=0; i<40; i++){//i==39까지
		if(avg[i]>Max)//현재 평균이 Max보다 크면
		{
			Max=avg[i];//Max에 현재 평균을 저장
			Maxposition=i;//Max값의 배열위치 저장
		}
	}

	return Maxposition;//위치 리턴
}

int findMin(float avg[])
{
	int i;//반복문
	float Min=avg[0];//최저점 저장
	int Minposition=0;//최저점의 위치

	for(i=0; i<40; i++){//i==39까지
		if(avg[i]<Min)//현재 평균이 Min보다 작으면
		{
			Min=avg[i];//Min에 현재 평균을 저장
			Minposition=i;//Min값의 배열위치 저장
		}
	}

	return Minposition;//위치 리턴
}