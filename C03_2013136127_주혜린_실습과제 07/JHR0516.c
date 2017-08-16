#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Info(void){//���� ���
	printf("+------------------------------------+\n");
	printf("|�й�:2013136127                     |\n");
	printf("|�Ҽ�:��ǻ�Ͱ��к�                   |\n");
	printf("|�̸�:������                         |\n");
	printf("+------------------------------------+\n");
	printf("|[1]���������� [2]Ȧ¦���� [3] ����  |\n");
	printf("+------------------------------------+\n");
}

int RSP(int h, int c);
int HolZak1(int h, int c);
int HolZak2(int h, int c);

int main (void){

	int MenuNum;//�޴� �Է��� ���� ����
	int num1, num2;//������Է�, ��ǻ�� �Է��� ���� ����
	int winh, winc;//����ڰ� �̱� Ƚ��, ��ǻ�Ͱ� �̱� Ƚ��
	int j;//���� ������ ���� ����
	int i, count;//����Ƚ��
	srand(time(NULL));//���� ����

	Info();

	while(1){
		printf("�޴��� �Է��ϼ���=>");
		scanf("%d", &MenuNum);//�޴� �Է�
		while(MenuNum>3){//MenuNum>3�̻��� ���
			printf("�Է��� �߸��Ǿ����ϴ�. �ٽ� �Է����ּ���=>");
			scanf("%d", &MenuNum);
			if(MenuNum<4) break;
		}
		switch(MenuNum){
		case 1://MenuNum==1
			printf("���������� ������ ��� ���� �����ϼ���=>");
			scanf("%d", &count);
			winh=0;
			winc=0;
			for(i=1; i<=count; i++){//i==count���� �ݺ�
				printf("����(0), ����(1), ��(2)�� �Է��ϼ���=>");
				scanf("%d", &num1);
				while(num1>2 && num1<0){//�Է��� �߸��Ǿ��� ��� ��µ�
					printf("�Է��� �߸��Ǿ����ϴ�. �ٽ� �Է����ּ���. ����(0), ����(1), ��(2)=>");
					scanf("%d", &num1);
					if(num1<3) break;
				}
				num2=rand()%3;//��ǻ���� �Է�
				printf("�����(%d) VS ��ǻ��(%d)\n", num1, num2);
				if(RSP(num1, num2)==0)//��� ���
					printf("�����ϴ�.\n");
				else if(RSP(num1, num2)==1){//�̱� ���
					printf("����� �̰���ϴ�.\n");
					winh++;
				}
				else if(RSP(num1, num2)==-1){//�� ���
					printf("��ǻ�Ͱ� �̰���ϴ�.\n");
					winc++;
				}
				if(i<count){//count ���� ������ ��
					if(winh>count/2){//����ڰ� ���ݼ� �̻� �¸�
						printf("����� ���������Դϴ�.\n\n");
						break;
					}
					if(winc>count/2){//��ǻ�Ͱ� ���ݼ� �̻� �¸�
						printf("��ǻ�Ͱ� ���������Դϴ�.\n\n");
						break;
					}
				}
				else if(i==count){//count���� ���� ���
					if(winh>winc){//����ڰ� ���ݼ� �̻� �¸�
						printf("����� �� ���� �̰���ϴ�.\n\n");
					}
					else if(winc>winh){//��ǻ�Ͱ� ���ݼ� �̻� �¸�
						printf("��ǻ�Ͱ� �� ���� �̰���ϴ�.\n\n");
					}
					else{//winc==winh
						printf("���ڰ� �����ϴ�.\n\n");
					}
				}
			}

			break;
		case 2://MenuNum==2
			printf("���� ������ ���� �����ϼ���, ��ǻ��(0), �����(1)=>");//���� ����
			scanf("%d", &j);
			printf("Ȧ¦ ������ ��� ���� �����ϼ���=>");//Ƚ�� �Է�
			scanf("%d", &count);
			winh=0;
			winc=0;
			for(i=1; i<=count; i++){//i==count���� �ݺ�
				printf("Ȧ(1), ¦(2)�� �Է����ּ���=>");
				scanf("%d", &num1);
				while(num1>2 && num1<1){//�Է��� �߸��Ǿ��� ��� ���
					printf("�Է��� �߸��Ǿ����ϴ�. �ٽ� �Է����ּ���. Ȧ(1), ¦(2)=>");
					scanf("%d", &num1);
					if(num1<3) break;
				}
				num2=rand()%2+1;//��ǻ���� �Է�
				printf("�����(%d) VS ��ǻ��(%d)\n", num1, num2);
				if(j==1){//������ ������� ���
					if(HolZak2(num1, num2)==0){//���� ���
						printf("����� �����ϴ�.\n");
						winc++;
					}
					else if(HolZak2(num1, num2)==1){//�̰��� ���
						printf("����� �̰���ϴ�.\n");
						winh++;
					}
				}
				else if(j==0){//������� �Է�
					if(HolZak1(num1, num2)==0){//���� ���
						printf("����� �����ϴ�.\n");
						winc++;
					}
					else if(HolZak1(num1, num2)==1){//�̰��� ���
						printf("����� �̰���ϴ�.\n");
						winh++;
					}
				}
				if(i<count){//count ���� ������ ���
					if(winh>count/2){//����ڰ� �̰��� ���
						printf("����� ���������Դϴ�.\n\n");
						break;
					}
					if(winc>count/2){//��ǻ�Ͱ� �̰��� ���
						printf("��ǻ�Ͱ� ���������Դϴ�.\n\n");
						break;
					}
				}
				else if(i==count){//count���� ���� ���
					if(winh>winc){//����ڰ� �� ���� �̰��� ���
						printf("����� �� ���� �̰���ϴ�.\n\n");
					}
					else if(winc>winh){//��ǻ�Ͱ� �� ���� �̰��� ���
						printf("��ǻ�Ͱ� �� ���� �̰���ϴ�.\n\n");
					}
					else{//winh==winc
						printf("���ڰ� �����ϴ�.\n\n");
					}
				}
			}
			break;
		case 3://MenuNum==3
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		if(MenuNum==3) break;//MenuNum==3�ϰ�� ���α׷� ����
	}
	getchar();
	getchar();
	return 0;
}

int RSP(int h, int c){//���������� �Լ�
	if((h-c+3)%3==0)//���� ���
		return 0;
	else if((h-c+3)%3==1)//�̱�� ���
		return 1;
	else if((h-c+3)%3==2)//���� ���
		return -1;
}

int HolZak1(int h, int c){//Ȧ¦ �Լ�, ��ǻ�Ͱ� ����
	if(h==c)//����ڰ� �̱� ���
		return 1;
	else//����ڰ� �� ���
		return 0;
}

int HolZak2(int h, int c){//Ȧ¦ �Լ�, ����ڰ� ����
	if(h==c)//����ڰ� �� ���
		return 0;
	else//����ڰ� �̱� ���
		return 1;
}