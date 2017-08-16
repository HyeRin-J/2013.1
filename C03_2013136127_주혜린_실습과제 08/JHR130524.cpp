#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Info()
{
	printf("+-------------------------------------------------------------+\n");
	printf("|   2013.05.24 C ���α׷��� I �ǽ� ���� 08                    |\n");
	printf("+-------------------------------------------------------------+\n");
	printf("|   �й� : 2013136127                                         |\n");
	printf("|   �Ҽ� : ��ǻ�Ͱ��к�                                       |\n");
	printf("|   �̸� : ������                                             |\n");
	printf("+-------------------------------------------------------------+\n");
	printf("|     [1]�ζ� ���α׷� [2]�� ������ [3]���� ���� [4]����      |\n");
	printf("+-------------------------------------------------------------+\n");
}

void PopALottoBall();
int Sariyaa();
void Question1(int i);
void Question2(int n);

int main ()
{
	int MenuNum;//�޴� �Է�
	srand(time(NULL));//���� �õ�
	int n;//����Ƚ��

	Info();
	while(1){
		printf("�޴��� �Է��ϼ���=>");
		scanf("%d", &MenuNum);//�޴� �Է� ����
		while(MenuNum<1 || MenuNum>4){//����ó��
			printf("�Է��� �߸��Ǿ����ϴ�. �ٽ� �Է����ּ���=>");
			scanf("%d", &MenuNum);
			if(MenuNum>0 && MenuNum<5) break;
		}
		switch(MenuNum){
		case 1://�ζ� ���α׷�
			printf("0-����\n");
			while(1){
				printf("Press Any Number to continue\n");
				scanf("%d", &n);//��ӽ��࿩�� �Ǵ�
				switch(n){
				default://0�ܿ� ��� ���
					PopALottoBall();//�ζ� �Լ� ȣ��
					break;
				case 0://0�ϰ��
					printf("�ζ� �̱⸦ �����մϴ�.\n\n");
					break;
				}
				if(n==0) break;//�ζ� ���α׷� ����
			}
			break;
		case 2://�������� ���α׷�
			printf("0-����\n");
			while(1){
				printf("Press Any Number to continue\n");
				scanf("%d", &n);//��� ���࿩�� �Ǵ�
				switch(n){
				default://0���� ��� ���
					Question1(Sariyaa());//������ �Լ� ȣ��
					break;
				case 0://0�� ���
					printf("�������⸦ �����մϴ�.\n\n");
					break;
				}
				if(n==0) break;//������ ���α׷� ����
			}
			break;
		case 3://���� ����
			while(1){
				printf("���� ��� ������ �Է��ϼ���(0-����)=>");
				scanf("%d", &n);//���� ������ Ƚ�� �Է�
				switch(n){
				default://0���� ���
					Question2(n);//���� ���� �Լ� ȣ��
					break;
				case 0://0�� ���
					printf("�����̸� �����մϴ�.\n\n");
					break;
				}
				if(n==0) break;//���� ���� ���α׷� ����
			}
			break;
		case 4://����
			printf("���α׷��� �����մϴ�.\n");
			break;
		}if(MenuNum==4) break;//���α׷� ����
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

int Sariyaa()//�� ���� �Լ�
{
	int i, Yut[4], result;//���� ����

	//1�� ��������, 0�� �� ��������
	for(i=0; i<4; i++)
		Yut[i]=rand()%2;//0 �Ǵ� 1

	//���� �ϳ��� ���� ����Ŵ

	result=10*Yut[0]+Yut[1]+Yut[2]+Yut[3];

	return result;
}

void Question1(int i)//������ ��� �Լ�
{
	if(i==10)//Yut[0]�ϳ��� ������
		printf("�鵵\n");
	else if(i==1)//Yut[0]�� ������ �ϳ��� ������
		printf("��\n");
	else if(i==2 || i==11)//Yut[0]�� ������ �ΰ� or Yut[0]�� ������ �ΰ��� ������
		printf("��\n");
	else if(i==3 || i==12)//Yut[0]�� ������ ���� or Yut[0]�� ������ ������ ������
		printf("��\n");
	else if(i==13){//���� �� ������
		printf("��\n");
		printf("�� �� �� �����ּ���!\n");
	}
	else if(i==0){//���� �������� ����
		printf("��\n");
		printf("�� �� �� �����ּ���!\n");
	}
}

void Question2(int n)//���� ���� �Լ�
{
	int i;//����
	int count[6];//������ ���� �迭 ���� 
	int result;//���

	//�迭 �ʱ�ȭ
	for(i=0; i<6; i++)
		count[i]=0;

	//�� ������ ���� 1�� �߰�
	for(i=0; i<n; i++)
	{
		result=Sariyaa();

		if(result==10)//�鵵
			count[0]++;
		else if(result==1)//��
			count[1]++;
		else if(result==2 || result==11)//��
			count[2]++;
		else if(result==3 || result==12)//��
			count[3]++;
		else if(result==13)//��
			count[4]++;
		else if(result==0)//��
			count[5]++;
	}

	//��� ���
	printf("�鵵 : %5dȸ  <%5.2f%%>\n", count[0], count[0]/(float)n*100);
	printf("  �� : %5dȸ  <%5.2f%%>\n", count[1], count[1]/(float)n*100);
	printf("  �� : %5dȸ  <%5.2f%%>\n", count[2], count[2]/(float)n*100);
	printf("  �� : %5dȸ  <%5.2f%%>\n", count[3], count[3]/(float)n*100);
	printf("  �� : %5dȸ  <%5.2f%%>\n", count[4], count[4]/(float)n*100);
	printf("  �� : %5dȸ  <%5.2f%%>\n", count[5], count[5]/(float)n*100);
}