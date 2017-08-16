#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Info()//����
{
	printf("+---------------------------------------------------------------------+\n");
	printf("|               2013.05.31 C ���α׷��� I �ǽ� ���� 09                |\n");
	printf("|                       �й� : 2013136127                             |\n");
	printf("|                       �Ҽ� : ��ǻ�Ͱ��к�                           |\n");
	printf("|                       �̸� : ������                                 |\n");
	printf("+---------------------------------------------------------------------+\n");
}

int findMax(float avg[]);
int findMin(float avg[]);

int main ()
{
	srand(time(NULL));//���� �õ� ������
	int i, j, k;//for�� ���� ����
	int score [40][8];//�� ���� ����
	int scoresum [8]={0};//������ ����
	float scoreavg [8]={0};//������ ���
	int sum [40]={0};//����
	float avg [40]={0};//���
	int num [40];//�й�
	char name [40][7]={//�̸� ����
		"�迵��", "�迵��", "�迵��", "�迵��", "�迵��", "�迵��", "�迵ĥ", "�迵��", "�迵��", "���Ͽ�",
		"������", "������", "���ϻ�", "���ϻ�", "���Ͽ�", "������", "����ĥ", "������", "���ϱ�", "���̿�",
		"������", "������", "���̻�", "���̻�", "���̿�", "������", "����ĥ", "������", "���̱�", "��￵",
		"�����", "�����", "����", "����", "����", "�����", "���ĥ", "�����", "��ﱸ", "��翵"
	};
	int allsum=0;//��ü ����
	float allavg=0;//��ü ���

	Info();

	for(i=0; i<40; i++){//�й� �Է�
		num [i]=(2013136001+i);
	}

	printf("   �й�     �̸�      1    2     3     4     5     6     7     8  ���� ���\n");

	//�� ������ ���
	for(i=0; i<40; i++){
		printf("%d ", num [i]);//�й� ���
		for(j=0; j<7; j++){//�̸� ���
			printf("%c", name [i][j]);
		}
		for(k=0; k<8; k++){//�� ������ ���� ���
			score[i][k]=rand()%101;
			sum[i]+=score[i][k];//�հ� ���
			scoresum[k]+=score[i][k];//������ �հ�
			printf("  %3d ", score[i][k]);
		}
		printf(" %3d", sum[i]);//�հ� ���
		avg[i]=(float)sum[i]/8;//��� ���
		printf(" %3.2f", avg[i]);//��� ���

		allsum+=sum[i];//��ü ����
		allavg+=avg[i];//��ü ����� ��
		printf("\n");
	}

	printf("[������ ����]     ");
	for(i=0; i<8; i++)
		printf(" %3d ", scoresum[i]);
	printf("\n");
	printf("[������ ���]     ");
	for(i=0; i<8; i++){
		scoreavg[i]=(float)scoresum[i]/40;
		printf(" %3.1f ", scoreavg[i]);
	}
	printf("\n");

	allavg=allavg/40;//��ü ���

	printf("-----------------------------------------------------------------------------\n");
	printf("[��ü ���] �л���: 40�� ����: %3d�� ���: %3.2f��\n", allsum, allavg);//��ü ������ ��ü ��� ���

	printf("[�ְ���] %d ", num[findMax(avg)]);//����� �ְ����� �л��� �й� ���
	for(i=0; i<7; i++){//����� �ְ����� �л��� �̸� ���
		printf("%c", name[findMax(avg)][i]);
	}
	printf("����: %3d�� ���: %3.2f��\n", sum[findMax(avg)], avg[findMax(avg)]);//����� �ְ����� �л��� ������ ��� ���

	printf("[������] %d ", num[findMin(avg)]);//����� �������� �л��� �й� ���
	for(i=0; i<7; i++){//����� �������� �л��� �̸� ���
		printf("%c", name[findMin(avg)][i]);
	}
	printf("����: %3d�� ���: %3.2f��\n", sum[findMin(avg)], avg[findMin(avg)]);//����� �������� �л��� ������ ��� ���

	getchar();
	getchar();

	return 0;
}

int findMax(float avg[])
{
	int i;//�ݺ���
	float Max=avg[0];//�ְ��� ����
	int Maxposition=0;//�ְ����� ��ġ

	for(i=0; i<40; i++){//i==39����
		if(avg[i]>Max)//���� ����� Max���� ũ��
		{
			Max=avg[i];//Max�� ���� ����� ����
			Maxposition=i;//Max���� �迭��ġ ����
		}
	}

	return Maxposition;//��ġ ����
}

int findMin(float avg[])
{
	int i;//�ݺ���
	float Min=avg[0];//������ ����
	int Minposition=0;//�������� ��ġ

	for(i=0; i<40; i++){//i==39����
		if(avg[i]<Min)//���� ����� Min���� ������
		{
			Min=avg[i];//Min�� ���� ����� ����
			Minposition=i;//Min���� �迭��ġ ����
		}
	}

	return Minposition;//��ġ ����
}