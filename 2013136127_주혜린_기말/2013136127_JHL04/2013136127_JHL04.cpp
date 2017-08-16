#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int JHLGetACard();

void JHLInfo()//정보 출력
{
	printf("****************************************\n");
	printf("*C 프로그래밍 기말고사 4번 문제\n");
	printf("*	날짜 : 2013년 6월 12일\n");
	printf("*	학번 : 2013136127\n");
	printf("*	이름 : 주혜린(JHL)\n");
	printf("*\n");
	printf("*	제목 : 4) 포커 게임 시뮬레이션\n");
	printf("*****************************************\n");
}

int main ()
{
	int i, j, k;//반복문
	int card[52]={0};//card
	srand(time(NULL));
	char menu;//메뉴

	JHLInfo();

	for(i=0; i<52; i++){
		card[i]=JHLGetACard();
		for(k=0; k<i; k++){//중복검사
			if(card[i]==card[k]) i--;
		}
	}

	printf("'s'huffle / 'n'ew card / 'q'uit\n");
	for(i=0; i<6; i++){
		if(card[i]/13==1){
			printf("♤");
			if(card[i]%13==1)
				printf("A\t");
			else if(card[i]%13==10)
				printf("J\t");
			else if(card[i]%13==11)
				printf("Q\t");
			else if(card[i]%13==12)
				printf("K\t");
			else
				printf("%d", card[i]%13);
		}
		else if(card[i]/13==2){
			printf("◇");
			if(card[i]%13==1)
				printf("A\t");
			else if(card[i]%13==10)
				printf("J\t");
			else if(card[i]%13==11)
				printf("Q\t");
			else if(card[i]%13==12)
				printf("K\t");
			else
				printf("%d", card[i]%13);
		}
		else if(card[i]/13==3){
			printf("♡");
			if(card[i]%13==1)
				printf("A\t");
			else if(card[i]%13==10)
				printf("J\t");
			else if(card[i]%13==11)
				printf("Q\t");
			else if(card[i]%13==12)
				printf("K\t");
			else
				printf("%d", card[i]%13);
		}
		else if(card[i]/13==4){
			printf("♧");
			if(card[i]%13==1)
				printf("A\t");
			else if(card[i]%13==10)
				printf("J\t");
			else if(card[i]%13==11)
				printf("Q\t");
			else if(card[i]%13==12)
				printf("K\t");
			else
				printf("%d", card[i]%13);
		}
	}



	getchar();
	getchar();
	return 0;
}

void JHLShuffle()
{

}

int JHLGetACard()
{
	int j, k;
	int card;
	card=rand()%52+1;

	return card;
}