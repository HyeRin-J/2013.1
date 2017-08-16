#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float JHLArrayAvg(int array[], int num);
int JHLArrayMaxID(int array[], int num);

void JHLInfo()//���� ���
{
	printf("****************************************\n");
	printf("*C ���α׷��� �⸻��� 3�� ����\n");
	printf("*	��¥ : 2013�� 6�� 12��\n");
	printf("*	�й� : 2013136127\n");
	printf("*	�̸� : ������(JHL)\n");
	printf("*\n");
	printf("*	���� : 3) �⺻���� �迭 Ȱ��\n");
	printf("*****************************************\n");
}

int main ()
{
	int i;//for��
	int array[50]={0};//���� 50�� �迭
	srand(time(NULL));

	for(i=0; i<50; i++)//�迭�� �� ����
		array[i]=rand()%101;

	printf("Average = %4.2f\n", JHLArrayAvg(array, 50));
	printf("Maximum: Id=%d, Val=%d\n", JHLArrayMaxID(array, 50)+1, array[JHLArrayMaxID(array, 50)]);

	for(i=0; i<50; i++)//�迭 �� ���
		printf("%d\t", array[i]);
	
	getchar();
	getchar();
	return 0;
}

float JHLArrayAvg(int array[], int num)//�迭���� ��ո���
{
	int i;//�ݺ���
	float avg=0;//���

	for(i=0; i<num; i++){
		avg+=array[i];
	}
	avg=avg/num;//��հ� ���

	return avg;
}

int JHLArrayMaxID(int array[], int num)//�ִ� ���� ��ġ ����
{
	int i;//�ݺ���
	float Max=array[0];//�ְ��� ����
	int Maxposition=0;//�ְ����� ��ġ

	for(i=0; i<num; i++){//i==49����
		if(array[i]>Max)//���� ���� Max���� ũ��
		{
			Max=array[i];//Max�� ���� ���� ����
			Maxposition=i;//Max���� �迭��ġ ����
		}
	}

	return Maxposition;//��ġ ����
}