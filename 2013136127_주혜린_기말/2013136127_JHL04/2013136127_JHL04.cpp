#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int JHLGetACard();

void JHLInfo()//���� ���
{
	printf("****************************************\n");
	printf("*C ���α׷��� �⸻��� 4�� ����\n");
	printf("*	��¥ : 2013�� 6�� 12��\n");
	printf("*	�й� : 2013136127\n");
	printf("*	�̸� : ������(JHL)\n");
	printf("*\n");
	printf("*	���� : 4) ��Ŀ ���� �ùķ��̼�\n");
	printf("*****************************************\n");
}

int main ()
{
	int i, j, k;//�ݺ���
	int card[52]={0};//card
	srand(time(NULL));
	char menu;//�޴�

	JHLInfo();

	for(i=0; i<52; i++){
		card[i]=JHLGetACard();
		for(k=0; k<i; k++){//�ߺ��˻�
			if(card[i]==card[k]) i--;
		}
	}

	printf("'s'huffle / 'n'ew card / 'q'uit\n");
	for(i=0; i<6; i++){
		if(card[i]/13==1){
			printf("��");
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
			printf("��");
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
			printf("��");
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
			printf("��");
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