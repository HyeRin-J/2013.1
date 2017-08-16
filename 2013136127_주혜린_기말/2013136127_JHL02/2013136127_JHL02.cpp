#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int JHLReturn();

void JHLInfo()//���� ���
{
	printf("****************************************\n");
	printf("*C ���α׷��� �⸻��� 2�� ����\n");
	printf("*	��¥ : 2013�� 6�� 12��\n");
	printf("*	�й� : 2013136127\n");
	printf("*	�̸� : ������(JHL)\n");
	printf("*\n");
	printf("*	���� : 2) �ֻ��� ������ �ùķ��̼�\n");
	printf("*****************************************\n");
}

int main ()
{
	int num[13]={0};//�� �պ��� �迭 ����
	srand(time(NULL));
	int n;//�� �� ������
	int i, j;//�ݺ���
	int sum;//�ֻ��� �հ�
	int avg=0;//����

	JHLInfo();

	printf("number of tries = ");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		sum=JHLReturn();//sum���� �ֻ��� �հ� ����
		switch(sum){//sum���� ���� ī��Ʈ ����
			case 2:
				num[2]++;
				break;
			case 3:
				num[3]++;
				break;
			case 4:
				num[4]++;
				break;
			case 5:
				num[5]++;
				break;
			case 6:
				num[6]++;
				break;
			case 7:
				num[7]++;
				break;
			case 8:
				num[8]++;
				break;
			case 9:
				num[9]++;
				break;
			case 10:
				num[10]++;
				break;
			case 11:
				num[11]++;
				break;
			case 12:
				num[12]++;
				break;
		}
	}

	printf("=======Result========\n");

	for(i=2; i<13; i++){//2���� 12���� ���
		avg=(((float)num[i]/n)*400)/1;//��հ�*4
		printf("[%2d]: %4d ", i, num[i]);
		for(j=avg; j>=1; j--){//��հ���ŭ *���
			printf("*");
		}
		printf("\n");
	}

	getchar();
	getchar();
	return 0;
}

int JHLReturn()//�ֻ����� ���� �����ϴ� �Լ�
{
	int num1, num2;//�� �ֻ��� ����
	int sum;//�ֻ����� �հ�

	num1=rand()%6+1;//1�� �ֻ���
	num2=rand()%6+1;//2�� �ֻ���

	sum=num1+num2;//�� �ֻ����� ��

	return sum;//�� ����
}