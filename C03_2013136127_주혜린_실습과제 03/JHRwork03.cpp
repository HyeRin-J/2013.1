#include <stdio.h>

void whoami ();
void printSizeOfDataTypes ();
void printShortOverflow ();
int myPow (int x, int y);

int main ()
{
	whoami ();
	
	printf("1) 다음 자료형의 크기를 출력하는 함수를 작성하시오.\n");
	printSizeOfDataTypes ();//1.자료형의 크기를 출력하는 함수 호출

	
	printf("2) short 자료형에서 오버플로우가 발생하는 순간을 찾는 코드를 작성하시오.\n");
	printShortOverflow ();//2.short의 오버플로우가 발생하는 순간을 찾는 함수 호출
	
	//3.x의 y승을 구하는 함수
	printf("3) 자신만의 myPow()함수를 구현하시오.\n");
	printf("%d의 %d승은 %d입니다.\n", 17, 3, myPow(17, 3));//myPow함수를 통해 x의 y승을 구할 수 있다.
	printf("%d의 %d승은 %d입니다.\n", 6, 7, myPow(6, 6));
	printf("%d의 %d승은 %d입니다.\n", 64353, 100, myPow(64353, 100));//오버플로우 발생

	getchar ();//Enter 입력 위해
	return 1;
}

void whoami()
{
	printf("**************************************\n");
	printf("성명 : 주혜린\n");
	printf("학번 : 2013136127\n");
	printf("소속 : 컴퓨터공학부\n");
	printf("**************************************\n");
}

void printSizeOfDataTypes()//1.자료형의 크기를 출력하는 함수
{
	printf("각 자료형의 크기를 출력합니다.\n");
	printf("          char : %3d byte\n", sizeof(char));//char의 크기 출력
	printf("         short : %3d bytes\n", sizeof(short));//short의 크기 출력
	printf("unsigned short : %3d bytes\n", sizeof(unsigned short));//unsigned short의 크기 출력
	printf("           int : %3d bytes\n", sizeof(int));//int의 크기 출력
	printf("          long : %3d bytes\n", sizeof(long));//long의 크기 출력
	printf("         float : %3d bytes\n", sizeof(float));//float의 크기 출력
	printf("        double : %3d bytes\n\n", sizeof(double));//double의 크기 출력
}
void printShortOverflow ()//2.short의 오버플로우가 발생하는 순간을 찾는 함수
{
	short score;//short형 변수 선언
	for(score=1; score>0; score=score++)//오버플로 발생 전까지 루프
	{
		printf("\r <%d>", score);
	}
	printf("------>오버플로우 발생(증가):<%d>\n\n", score);//오버플로우 발생
	char alarm='\a';
	printf("%c\n", alarm);//경고음 출력
}
int myPow (int x, int y)//3.x의 y승을 구하는 함수
{
	int i;//i번 곱해주기 위해 변수 선언
	int result=1;//int형 결과값 선언

	for(i=0; i<y; i=i++)//y번 만큼 x를 곱하기 위한 for문
	{
		result=result*x;//결과값에 y번만큼 x를 곱한다.
	}
	return result;//결과값 반환
}