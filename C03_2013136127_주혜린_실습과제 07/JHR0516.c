#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Info(void){//정보 출력
	printf("+------------------------------------+\n");
	printf("|학번:2013136127                     |\n");
	printf("|소속:컴퓨터공학부                   |\n");
	printf("|이름:주혜린                         |\n");
	printf("+------------------------------------+\n");
	printf("|[1]가위바위보 [2]홀짝게임 [3] 종료  |\n");
	printf("+------------------------------------+\n");
}

int RSP(int h, int c);
int HolZak1(int h, int c);
int HolZak2(int h, int c);

int main (void){

	int MenuNum;//메뉴 입력을 위한 변수
	int num1, num2;//사용자입력, 컴퓨터 입력을 위한 변수
	int winh, winc;//사용자가 이긴 횟수, 컴퓨터가 이긴 횟수
	int j;//딜러 선택을 위한 변수
	int i, count;//실행횟수
	srand(time(NULL));//난수 지정

	Info();

	while(1){
		printf("메뉴를 입력하세요=>");
		scanf("%d", &MenuNum);//메뉴 입력
		while(MenuNum>3){//MenuNum>3이상일 경우
			printf("입력이 잘못되었습니다. 다시 입력해주세요=>");
			scanf("%d", &MenuNum);
			if(MenuNum<4) break;
		}
		switch(MenuNum){
		case 1://MenuNum==1
			printf("가위바위보 게임을 몇번 할지 선택하세요=>");
			scanf("%d", &count);
			winh=0;
			winc=0;
			for(i=1; i<=count; i++){//i==count까지 반복
				printf("가위(0), 바위(1), 보(2)를 입력하세요=>");
				scanf("%d", &num1);
				while(num1>2 && num1<0){//입력이 잘못되었을 경우 출력됨
					printf("입력이 잘못되었습니다. 다시 입력해주세요. 가위(0), 바위(1), 보(2)=>");
					scanf("%d", &num1);
					if(num1<3) break;
				}
				num2=rand()%3;//컴퓨터의 입력
				printf("사용자(%d) VS 컴퓨터(%d)\n", num1, num2);
				if(RSP(num1, num2)==0)//비긴 경우
					printf("비겼습니다.\n");
				else if(RSP(num1, num2)==1){//이긴 경우
					printf("당신이 이겼습니다.\n");
					winh++;
				}
				else if(RSP(num1, num2)==-1){//진 경우
					printf("컴퓨터가 이겼습니다.\n");
					winc++;
				}
				if(i<count){//count 전에 끝났을 때
					if(winh>count/2){//사용자가 과반수 이상 승리
						printf("당신이 최종승자입니다.\n\n");
						break;
					}
					if(winc>count/2){//컴퓨터가 과반수 이상 승리
						printf("컴퓨터가 최종승자입니다.\n\n");
						break;
					}
				}
				else if(i==count){//count까지 했을 경우
					if(winh>winc){//사용자가 과반수 이상 승리
						printf("당신이 더 많이 이겼습니다.\n\n");
					}
					else if(winc>winh){//컴퓨터가 과반수 이상 승리
						printf("컴퓨터가 더 많이 이겼습니다.\n\n");
					}
					else{//winc==winh
						printf("승자가 없습니다.\n\n");
					}
				}
			}

			break;
		case 2://MenuNum==2
			printf("누가 딜러가 될지 선택하세요, 컴퓨터(0), 사용자(1)=>");//딜러 선택
			scanf("%d", &j);
			printf("홀짝 게임을 몇번 할지 선택하세요=>");//횟수 입력
			scanf("%d", &count);
			winh=0;
			winc=0;
			for(i=1; i<=count; i++){//i==count까지 반복
				printf("홀(1), 짝(2)을 입력해주세요=>");
				scanf("%d", &num1);
				while(num1>2 && num1<1){//입력이 잘못되었을 경우 출력
					printf("입력이 잘못되었습니다. 다시 입력해주세요. 홀(1), 짝(2)=>");
					scanf("%d", &num1);
					if(num1<3) break;
				}
				num2=rand()%2+1;//컴퓨터의 입력
				printf("사용자(%d) VS 컴퓨터(%d)\n", num1, num2);
				if(j==1){//딜러가 사용자일 경우
					if(HolZak2(num1, num2)==0){//졌을 경우
						printf("당신이 졌습니다.\n");
						winc++;
					}
					else if(HolZak2(num1, num2)==1){//이겼을 경우
						printf("당신이 이겼습니다.\n");
						winh++;
					}
				}
				else if(j==0){//사용자의 입력
					if(HolZak1(num1, num2)==0){//졌을 경우
						printf("당신이 졌습니다.\n");
						winc++;
					}
					else if(HolZak1(num1, num2)==1){//이겼을 경우
						printf("당신이 이겼습니다.\n");
						winh++;
					}
				}
				if(i<count){//count 전에 끝났을 경우
					if(winh>count/2){//사용자가 이겼을 경우
						printf("당신이 최종승자입니다.\n\n");
						break;
					}
					if(winc>count/2){//컴퓨터가 이겼을 경우
						printf("컴퓨터가 최종승자입니다.\n\n");
						break;
					}
				}
				else if(i==count){//count까지 갔을 경우
					if(winh>winc){//사용자가 더 많이 이겼을 경우
						printf("당신이 더 많이 이겼습니다.\n\n");
					}
					else if(winc>winh){//컴퓨터가 더 많이 이겼을 경우
						printf("컴퓨터가 더 많이 이겼습니다.\n\n");
					}
					else{//winh==winc
						printf("승자가 없습니다.\n\n");
					}
				}
			}
			break;
		case 3://MenuNum==3
			printf("프로그램을 종료합니다.\n");
			break;
		}
		if(MenuNum==3) break;//MenuNum==3일경우 프로그램 종료
	}
	getchar();
	getchar();
	return 0;
}

int RSP(int h, int c){//가위바위보 함수
	if((h-c+3)%3==0)//비기는 경우
		return 0;
	else if((h-c+3)%3==1)//이기는 경우
		return 1;
	else if((h-c+3)%3==2)//지는 경우
		return -1;
}

int HolZak1(int h, int c){//홀짝 함수, 컴퓨터가 딜러
	if(h==c)//사용자가 이긴 경우
		return 1;
	else//사용자가 진 경우
		return 0;
}

int HolZak2(int h, int c){//홀짝 함수, 사용자가 딜러
	if(h==c)//사용자가 진 경우
		return 0;
	else//사용자가 이긴 경우
		return 1;
}