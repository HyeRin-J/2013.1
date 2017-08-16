#include <stdio.h>

void MyInfo();
void TempTest();
void Arbeit();
void Weight();
void Num();
void BitTest();

int main ()
{
	MyInfo ();//정보 호출

	printf("[1]화씨 온도를 섭씨 온도로 바꾸는 함수\n\n");
	TempTest();//[1] 호출
	
	printf("[2]아르바이트 수당을 구하는 함수\n\n");
	Arbeit();//[2] 호출
	
	printf("[3]kg을 pound로 바꾸는 함수\n\n");
	Weight();//[3] 호출
	
	printf("[4]정수 천만 이하의 하나의 수를 입력 받아 우리가 사용하는 단위인 만, 천, 백, 십, 일 단위로 출력하는 함수.\n\n");
	Num();//[4] 호출

	printf("[5]적당한 비트마스크를 이용하여 표준입력으로 받은 정수의 하위 2 번째 바이트의 값을 16진수로 출력하는 프로그램을 작성하시오.\n\n");
	BitTest();

	getchar();
	getchar();
	return 0;
}

void MyInfo()
{
	printf("*****************************************\n");
	printf("학번: 2013136127\n소속: 컴퓨터 공학부\n이름: 주혜린\n");
	printf("*****************************************\n");
	printf("2013.04.05 실습과제 04\n");
	printf("*****************************************\n\n");
}

void TempTest()//화씨온도를 섭씨온도로 바꾸는 함수
{
	double F;
	double C;//double형으로 화씨온도, 섭씨온도 변수 선언

	printf("화씨 온도를 입력하세요==>");
	scanf("%lf", &F);//화씨 온도 입력
	printf("입력된 온도는 %lf입니다.\n", F);
	
	C=(F-32)*5/9;//섭씨 온도를 구하는 식
	printf("섭씨 온도는 %lf입니다.\n\n", C);//섭씨 온도 출력
}

void Arbeit()//아르바이트 수당을 구하는 함수
{
	int Money, Time, Day, Pay;//각각 시간수당, 하루평균노동시간, 근무일수, 총수당
	
	printf("시간당 아르바이트 수당을 입력하세요==>");
	scanf("%d", &Money);//시간당 수당 입력
	printf("하루 평균 노동시간을 입력하세요==>");
	scanf("%d", &Time);//하루평균노동시간 입력
	printf("근무일수를 입력하세요==>");
	scanf("%d", &Day);//근무일수 입력

	Pay=Money*Time*Day;//총 아르바이트수당을 구하는 식
	printf("아르바이트 수당은 %d입니다.\n\n", Pay);//아르바이트 수당 출력
}

void Weight()//kg에서 pound로 변환하는 함수
{
	double mKg;//질량(kg) 입력을 위한 변수 선언
	double mP;//질량(P) 출력을 위한 변수 선언

	printf("질량(kg)을 입력하세요==>");
	scanf("%lf", &mKg);//질량(kg) 입력
	
	mP=mKg*0.453592;//pound를 구하는 함수

	printf("질량(pound)은 %.3lf입니다.\n\n", mP);//질량(pound) 출력
}

void Num()//각 정수에 단위를 붙여 출력하는 함수
{
	int num;//천만 이하의 정수 입력 위해 변수 i 선언
	int man, chun, bek, sip, ill;//각각 만, 천, 백, 십, 일을 나타내는 변수

	printf("천만 이하의 정수를 입력하세요==>");
	scanf("%d", &num);

	man=num/10000;//num을 10000으로 나눈 몫
	chun=(num-man*10000)/1000;//num에서 만 단위를 빼고 1000으로 나눈 몫
	bek=(num-man*10000-chun*1000)/100;//num에서 만, 천 단위를 빼고 100으로 나눈 몫
	sip=(num-man*10000-chun*1000-bek*100)/10;//num에서 만, 천, 백 단위를 빼고 10으로 나눈 몫
	ill=num-man*10000-chun*1000-bek*100-sip*10;//num에서 만, 천, 백, 십 단위를 뺌

	printf("입력한 숫자는 %d만 %d천 %d백 %d십 %d입니다.\n\n", man, chun, bek, sip, ill);//결과 출력
}

void BitTest()//하위 2번째 바이트의 값을 16진수로 출력하는 함수
{
	int i;//정수 입력을 위한 변수 지정
	int k;//비트 마스크와 i의 비트논리연산을 위한 변수 지정

	printf("정수를 입력하세요==>");
	scanf("%d", &i);//정수 입력
	printf("입력된 정수 ==> %x\n", i);
	printf("비트 마스크 ==> %x\n", 0xff00);

	k= i & 0xff00;//비트 마스크 & i

	printf("비트 AND ==> %x\n", k);//비트마스크와 i의 비트논리연산 결과값 출력
	
	k >>= 8;						//오른쪽으로 8비트 이동
	printf("8비트 >> ==>%x\n", k);//하위 2번째 바이트의 값 16진수로 출력
}