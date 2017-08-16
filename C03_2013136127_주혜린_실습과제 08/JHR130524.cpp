#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Info()
{
	printf("+-------------------------------------------------------------+\n");
	printf("|   2013.05.24 C 프로그래밍 I 실습 과제 08                    |\n");
	printf("+-------------------------------------------------------------+\n");
	printf("|   학번 : 2013136127                                         |\n");
	printf("|   소속 : 컴퓨터공학부                                       |\n");
	printf("|   이름 : 주혜린                                             |\n");
	printf("+-------------------------------------------------------------+\n");
	printf("|     [1]로또 프로그램 [2]윷 던지기 [3]윷의 비율 [4]종료      |\n");
	printf("+-------------------------------------------------------------+\n");
}

void PopALottoBall();
int Sariyaa();
void Question1(int i);
void Question2(int n);

int main ()
{
	int MenuNum;//메뉴 입력
	srand(time(NULL));//랜덤 시드
	int n;//실행횟수

	Info();
	while(1){
		printf("메뉴를 입력하세요=>");
		scanf("%d", &MenuNum);//메뉴 입력 받음
		while(MenuNum<1 || MenuNum>4){//예외처리
			printf("입력이 잘못되었습니다. 다시 입력해주세요=>");
			scanf("%d", &MenuNum);
			if(MenuNum>0 && MenuNum<5) break;
		}
		switch(MenuNum){
		case 1://로또 프로그램
			printf("0-종료\n");
			while(1){
				printf("Press Any Number to continue\n");
				scanf("%d", &n);//계속실행여부 판단
				switch(n){
				default://0외에 모든 경우
					PopALottoBall();//로또 함수 호출
					break;
				case 0://0일경우
					printf("로또 뽑기를 종료합니다.\n\n");
					break;
				}
				if(n==0) break;//로또 프로그램 종료
			}
			break;
		case 2://윷던지기 프로그램
			printf("0-종료\n");
			while(1){
				printf("Press Any Number to continue\n");
				scanf("%d", &n);//계속 실행여부 판단
				switch(n){
				default://0외의 모든 경우
					Question1(Sariyaa());//윷놀이 함수 호출
					break;
				case 0://0의 경우
					printf("윷던지기를 종료합니다.\n\n");
					break;
				}
				if(n==0) break;//윷놀이 프로그램 종료
			}
			break;
		case 3://윷의 비율
			while(1){
				printf("윷을 몇번 던질지 입력하세요(0-종료)=>");
				scanf("%d", &n);//윷을 던지는 횟수 입력
				switch(n){
				default://0외의 경우
					Question2(n);//윷의 비율 함수 호출
					break;
				case 0://0인 경우
					printf("윷놀이를 종료합니다.\n\n");
					break;
				}
				if(n==0) break;//윷의 비율 프로그램 종료
			}
			break;
		case 4://종료
			printf("프로그램을 종료합니다.\n");
			break;
		}if(MenuNum==4) break;//프로그램 종료
	}

	getchar();
	getchar();
	return 0;
}

void PopALottoBall()
{
	int j, k;
	int Lotto[6];

	for(j=0; j<6; j++){
		Lotto[j]=rand()%45+1;
		for(k=0; k<j; k++){
			if(Lotto[j]==Lotto[k]) j--;
		}
	}
	for(j=0; j<6; j++){
		printf("[%3d]\n", Lotto[j]);
	}
}

int Sariyaa()//윷 생성 함수
{
	int i, Yut[4], result;//변수 지정

	//1이 뒤집힌거, 0이 안 뒤집힌거
	for(i=0; i<4; i++)
		Yut[i]=rand()%2;//0 또는 1

	//각각 하나의 윷을 가르킴

	result=10*Yut[0]+Yut[1]+Yut[2]+Yut[3];

	return result;
}

void Question1(int i)//윷놀이 출력 함수
{
	if(i==10)//Yut[0]하나만 뒤집힘
		printf("백도\n");
	else if(i==1)//Yut[0]을 제외한 하나가 뒤집힘
		printf("도\n");
	else if(i==2 || i==11)//Yut[0]을 제외한 두개 or Yut[0]을 포함한 두개가 뒤집힘
		printf("개\n");
	else if(i==3 || i==12)//Yut[0]을 제외한 세개 or Yut[0]을 포함한 세개가 뒤집힘
		printf("걸\n");
	else if(i==13){//전부 다 뒤집힘
		printf("윷\n");
		printf("한 번 더 던져주세요!\n");
	}
	else if(i==0){//전부 뒤집히지 않음
		printf("모\n");
		printf("한 번 더 던져주세요!\n");
	}
}

void Question2(int n)//윷의 비율 함수
{
	int i;//루프
	int count[6];//비율을 위해 배열 지정 
	int result;//결과

	//배열 초기화
	for(i=0; i<6; i++)
		count[i]=0;

	//윷 생성에 따라 1씩 추가
	for(i=0; i<n; i++)
	{
		result=Sariyaa();

		if(result==10)//백도
			count[0]++;
		else if(result==1)//도
			count[1]++;
		else if(result==2 || result==11)//개
			count[2]++;
		else if(result==3 || result==12)//걸
			count[3]++;
		else if(result==13)//윷
			count[4]++;
		else if(result==0)//모
			count[5]++;
	}

	//결과 출력
	printf("백도 : %5d회  <%5.2f%%>\n", count[0], count[0]/(float)n*100);
	printf("  도 : %5d회  <%5.2f%%>\n", count[1], count[1]/(float)n*100);
	printf("  개 : %5d회  <%5.2f%%>\n", count[2], count[2]/(float)n*100);
	printf("  걸 : %5d회  <%5.2f%%>\n", count[3], count[3]/(float)n*100);
	printf("  윷 : %5d회  <%5.2f%%>\n", count[4], count[4]/(float)n*100);
	printf("  모 : %5d회  <%5.2f%%>\n", count[5], count[5]/(float)n*100);
}