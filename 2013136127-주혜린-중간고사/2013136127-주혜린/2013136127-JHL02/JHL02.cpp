#include <stdio.h>
#include "JHLMath.h"

void JHLPrintNumber(int num);
void Menu();


void JHLInfo()//정보 출력
{
	printf("+=============================================================+\n");
	printf("|C 프로그래밍 중간고사 2번 문제                               |\n");
	printf("|날짜 : 2013년 5월 3일                                        |\n");
	printf("|학번 : 2013136127                                            |\n");
	printf("|이름 : 주혜린(JHL)                                           |\n");
	printf("+=============================================================+\n");
	printf("|제목 : 몇가지 함수 구현하기                                  |\n");
	printf("+-------------------------------------------------------------+\n");
}

int main ()
{
	int num;
	char i;
	int n, r;

	JHLInfo();

	Menu();

	while(1){	
		printf("메뉴를 입력하세요==>");
		scanf("%c", &i);
		
		switch(i){
			case '1':
				printf("출력할 숫자를 입력하세요=");
				scanf("%d", &num);//출력할 숫자 입력
				
				JHLPrintNumber(num);
				break;
			case '2':
				printf("n개의 서로 다른 구슬 중 중복되지 않도록 순서 없이 r을 뽑는 경우의 수를 출력합니다.\n");
				printf("n은=");
				scanf("%d", &n);
				printf("r은=");
				scanf("%d", &r);

				printf("%d\n", JHL01(n, r));
				break;
			case '3':
				printf("n개의 서로 다른 구슬 중 중복되지 않도록 순서를 고려해 r을 뽑는 경우의 수를 출력합니다.\n");
				printf("n은=");
				scanf("%d", &n);
				printf("r은=");
				scanf("%d", &r);

				printf("%d\n", JHL02(n, r));
				break;
			case 'q':
				printf("프로그램을 종료합니다\n");
		}
		if(i=='q') break;
	}

	getchar();
	getchar();
	return 0;
}

void Menu()
{
	printf("[1]1번 함수 테스트[2]2번 함수 테스트[3]3번 함수 테스트[q]프로그램 종료\n");
}