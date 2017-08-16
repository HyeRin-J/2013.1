#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float JHLArrayAvg(int array[], int num);
int JHLArrayMaxID(int array[], int num);

void JHLInfo()//정보 출력
{
	printf("****************************************\n");
	printf("*C 프로그래밍 기말고사 3번 문제\n");
	printf("*	날짜 : 2013년 6월 12일\n");
	printf("*	학번 : 2013136127\n");
	printf("*	이름 : 주혜린(JHL)\n");
	printf("*\n");
	printf("*	제목 : 3) 기본적인 배열 활용\n");
	printf("*****************************************\n");
}

int main ()
{
	int i;//for용
	int array[50]={0};//길이 50의 배열
	srand(time(NULL));

	for(i=0; i<50; i++)//배열에 값 지정
		array[i]=rand()%101;

	printf("Average = %4.2f\n", JHLArrayAvg(array, 50));
	printf("Maximum: Id=%d, Val=%d\n", JHLArrayMaxID(array, 50)+1, array[JHLArrayMaxID(array, 50)]);

	for(i=0; i<50; i++)//배열 값 출력
		printf("%d\t", array[i]);
	
	getchar();
	getchar();
	return 0;
}

float JHLArrayAvg(int array[], int num)//배열값의 평균리턴
{
	int i;//반복문
	float avg=0;//평균

	for(i=0; i<num; i++){
		avg+=array[i];
	}
	avg=avg/num;//평균값 계산

	return avg;
}

int JHLArrayMaxID(int array[], int num)//최대 값의 위치 리턴
{
	int i;//반복문
	float Max=array[0];//최고점 저장
	int Maxposition=0;//최고점의 위치

	for(i=0; i<num; i++){//i==49까지
		if(array[i]>Max)//현재 값이 Max보다 크면
		{
			Max=array[i];//Max에 현재 값을 저장
			Maxposition=i;//Max값의 배열위치 저장
		}
	}

	return Maxposition;//위치 리턴
}