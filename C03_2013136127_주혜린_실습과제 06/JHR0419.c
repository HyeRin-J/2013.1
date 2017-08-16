#include <stdio.h>

void whoami();
void menu();
double temp(int temp);
double compound (int a, int N, double r);
double simple(int a, int N, double r);
void interest(int a, int N, double r);
int sum1(int num);
int sum2(int num);


int main ()
{
	int num1;//menu �Է�
	int i;//[1] �µ� �Է��� ���� ����
	int a, N;//[2] ����, �Ⱓ
	double r;//[2] ������
	int num;//[3] �ڿ��� N

	whoami();
	menu();

	do//�ݺ���
	{
		printf("���ڸ� �Է����ּ���==>");
		scanf("%d", &num1);

		while(num1>4)//5�̻� �Է½� ���
		{
			printf("�Է��� �߸��Ǿ����ϴ�. ���ڸ� �Է��� �ּ���==>");
			scanf("%d", &num1);//num1 ���Է�
			if(num1<5) break;//num1�� 4������ ��� �ݺ��� ��������
		}

		switch(num1)//num1 ���� ���� ������ �Լ� ���
		{
		case 1://num1=1
			printf("[1]���� �µ��� ȭ�� �µ��� ��ȯ�ϴ� �Լ��� �����, ���� ���� 20������ ���� 50�� ���� 5�� ���� ������ �̿� ���� ȭ�� �µ��� ����Ͻÿ�.\n");

			for(i=-20; i<=50; i=i+5)//-20������ 5���� 50������ ���
				printf("���� %d�� ==> ȭ�� %lf��\n", i, temp(i));
			
			printf("Press Enter to continue\n");
			getchar();
			getchar();
			break;
		case 2://num1=2
			printf("[2]����, ������, �Ⱓ(��)�� �Է��ϸ� �ܸ� ��� �Ѿװ� ���� ��� �Ѿ��� ��µǵ��� �Ͻÿ�.\n");
			printf("������ �Է��ϼ���==>");
			scanf("%d", &a);
			printf("�������� �Է��ϼ���==>");
			scanf("%lf", &r);
			printf("�Ⱓ�� �Է��ϼ���==>");
			scanf("%d", &N);

			interest(a, N, r);//����, �ܸ� ���
			
			printf("Press Enter to continue\n");
			getchar();
			getchar();
			break;
		case 3://num1=3
			printf("[3]�ڿ��� N�� �Է¹޾� 1���� N������ ���� ���ϴ� �Լ�\n");

			printf("1���� N������ ���� ����մϴ�. N�� �Է����ּ���==>");
			scanf("%d", &num);

			printf("(�ݺ���)1���� %d������ ���� %d�Դϴ�.\n", num, sum1(num));//�ݺ����� �̿��Ͽ� �� ���
			printf("(����Լ�)1���� %d������ ���� %d�Դϴ�.\n", num, sum2(num));//����Լ��� �̿��Ͽ� �� ���

			printf("Press Enter to continue\n");
			getchar();
			getchar();
			break;
		case 4://num1=4
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
	}while(num1<4);//num1>3�� ��� �ݺ��� ��������

	getchar();
	getchar();
	return 0;
}

void whoami()
{
	printf("************************************************\n");
	printf("�й�: 2013136127\n�Ҽ�: ��ǻ�Ͱ��к�\n�̸�: ������\n");
	printf("************************************************\n");
	printf("2013.04.19.�ǽ�����06\n");
	printf("************************************************\n");
}

void menu()
{
	printf("[1] �µ� ��ȯ	[2] ���ڰ��	[3] 1������ ��	[4] ����\n");
}

double temp(int Ctemp)//[1] �µ� ��ȯ
{
	double Ftemp;//ȭ�� �µ�

	Ftemp=Ctemp*1.8+32;//C=(5/9)(F-32), F=1.8*C-32

	return Ftemp;//Ftemp�� ��ȯ
}

double compound(int a, int N, double r)//[2] �������
{
	double S;//�����հ�
	int i;//for�� ���� ����

	S=a;//�����հ�=����

	for(i=1; i<=N; i++)//i=N���� ����
		S=S*(1+r);

	return S;//S�� ��ȯ
}

double simple(int a, int N, double r)//�ܸ� �հ�
{
	double S;//�ܸ� �հ�

	S=a*(1 + r * N);
	
	return S;//S�� ��ȯ
}

void interest(int a, int N, double r)
{
	printf("������ %lf, �ܸ��� %lf�Դϴ�.\n", compound(a, N, r), simple(a, N, r));
}

int sum1(int num)//�ݺ����� �̿��� ��
{
	int sum=0;//�հ� �ʱ�ȭ
	int i;//for �� ���� ����

	for(i=1; i<=num; i++)//i=num���� ����
	{
		sum=sum+i;
	}

	return sum;//sum�� ��ȯ
}
int sum2(int num)//����Լ��� �̿��� ��
{
	int sum=0;//�հ� �ʱ�ȭ

	if(num>0)//num<=0���� ����
	{
		sum=num+sum2(num-1);
	}

	return sum;//sum�� ��ȯ
}