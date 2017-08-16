#include <stdio.h>

void whoami();
void menu();
void gradeif(int grade);
void gradeswitch(int grade);
void primenumber(int n);
void triangle(int k);

int main ()
{
	int num;//�޴��Է��� ���� ����
	int grade1;//[1]�� ���� ����
	int grade2;//[2]�� ���� ����
	int n;//[3]�� ���� ����
	int k;//[4]�� ���� ����

	whoami();
	menu();

	while(1)//���� �Է� �ݺ�
	{
		printf("���ڸ� �Է��ϼ���===>");//�� ���ں��� �Լ� ���
		scanf("%d", &num);

		while(num>5)//num�� 6�̻��� ��� ���
		{
			printf("�Է��� �߸��Ǿ����ϴ�!\n");
			printf("���ڸ� �Է��ϼ���===>");//num ���Է�
			scanf("%d", &num);
			if(num<6) break;//num�� 5������ ��� ���� ���� ���
		}

		switch(num){
		case 1:
			printf("����(0~99)�� �Է��ϼ���===>");//���� �Է�
			scanf("%d", &grade1);

			while(grade1>99)//grade1�� 100�̻��� ��� ���
			{
				printf("�Է��� �߸��Ǿ����ϴ�!\n");
				printf("����(0~99)�� �Է��ϼ���===>");//grade1 ���Է�
				scanf("%d", &grade1);
				if(grade1<100) break;//99������ ��� ���� ���� ���
			}
			
			gradeif(grade1);//if �� ����� ���� ��� ���
			
			printf("\nPress Enter To Continue\n");
			getchar();
			getchar();
			break;

		case 2:
			printf("����(0~99)�� �Է��ϼ���===>");//���� �Է�
			scanf("%d", &grade2);

			while(grade2>99)//grade2�� 100�̻��� ��� ���
			{
				printf("�Է��� �߸��Ǿ����ϴ�!\n");
				printf("����(0~99)�� �Է��ϼ���===>");//grade2 ���Է�
				scanf("%d", &grade2);
				if(grade2<100) break;//99������ ��� ���� ���� ���
			}
			
			gradeswitch(grade2);//switch�� ����� ���� ��� ���
			
			printf("\nPress Enter To Continue\n");
			getchar();
			getchar();
			break;

		case 3:
			printf("2���� n������ �Ҽ��� ���մϴ�. n�� �Է����ּ���===>");//�Ҽ��� ���ϰ� ���� ���� �Է�
			scanf("%d", &n);

			primenumber(n);//�Ҽ��� ���

			printf("\nPress Enter To Continue\n");
			getchar();
			getchar();
			break;

		case 4:
			printf("���ڸ� �Է��ϼ���===>");//���� �Է�
			scanf("%d", &k);

			triangle(k);//�ﰢ���� ���� ����ϴ� �Լ� �ۼ�

			printf("\nPress Enter To Continue\n");
			getchar();
			getchar();
			break;

		case 5:
			printf("���α׷��� �����մϴ�.\n");
			getchar();
		}
		if(num==5) break;//num�� 5�ϰ�� while�� ����
	}

		getchar ();
		return 0;
}

void whoami()
{
	printf("******************************************************************\n");
	printf("�̸�: ������\n�й�: 2013136127\n�Ҽ�: ��ǻ�Ͱ��к�\n");
	printf("******************************************************************\n");
	printf("2013.04.12.�ǽ����� 05\n");
	printf("******************************************************************\n");
}

void menu ()
{
	printf(" Menu\n");
	printf("[1]�������(if)	[2]�������(switch)	[3]�Ҽ����\n[4]�ﰢ�������	[5]����\n");
	printf("******************************************************************\n");
}

void gradeif(int grade)//1. ���� ǥ�� �������� ������ �Է� �޾� ������ ����Ͽ� ����ϴ� �Լ��� if ���� �̿��Ͽ� �ۼ��Ͻÿ�.
{
	if(grade<60){//60�̸�
		printf("����� ������ F�Դϴ�.\n");
	}
	else if(grade<65){//60�̻� 65�̸�
		printf("����� ������ D0�Դϴ�.\n");
	}
	else if(grade<70){//65�̻� 70�̸�
		printf("����� ������ D+�Դϴ�.\n");
	}
	else if(grade<75){//70�̻� 75�̸�
		printf("����� ������ C0�Դϴ�.\n");
	}
	else if(grade<80){//75�̻� 80�̸�
		printf("����� ������ C+�Դϴ�.\n");
	}
	else if(grade<85){//80�̻� 85�̸�
		printf("����� ������ B0�Դϴ�.\n");
	}
	else if(grade<90){//85�̻� 90�̸�
		printf("����� ������ B+�Դϴ�.\n");
	}
	else if(grade<95){//90�̻� 95�̸�
		printf("����� ������ A0�Դϴ�.\n");
	}
	else{//95�̻� 100�̸�
		printf("����� ������ A+�Դϴ�.\n");
	}
}

void gradeswitch(int grade)//1. ���� ǥ�� �������� ������ �Է� �޾� ������ ����Ͽ� ����ϴ� �Լ��� switch ���� �̿��Ͽ� �ۼ��Ͻÿ�.
{
	int point;//switch���� ����ϱ� ���� ����

	point=grade/5;

	switch(point){
		case 19://95�̻� 100�̸�
			printf("����� ������ A+�Դϴ�.\n");
			break;
		case 18://90�̻� 95�̸�
			printf("����� ������ A0�Դϴ�.\n");
			break;
		case 17://85�̻� 90�̸�
			printf("����� ������ B+�Դϴ�.\n");
			break;
		case 16://80�̻� 85�̸�
			printf("����� ������ B0�Դϴ�.\n");
			break;
		case 15://75�̻� 80�̸�
			printf("����� ������ C+�Դϴ�.\n");
			break;
		case 14://70�̻� 75�̸�
			printf("����� ������ C0�Դϴ�.\n");
			break;
		case 13://65�̻� 70�̸�
			printf("����� ������ D+�Դϴ�.\n");
			break;
		case 12://60�̻� 65�̸�
			printf("����� ������ D0�Դϴ�.\n");
			break;
		default://60�̸�
			printf("����� ������ F�Դϴ�.\n");
			break;
	}

}

void primenumber(int n)//� �ڿ��� n�� �Է� �޾� 2���� n������ �Ҽ�(prime number)�� ã�� ����ϴ� �Լ��� �ۼ��Ͻÿ�.
{
	int number, divisor, count=0;//�Ҽ� ����, ������ ��, ��°���

	for(number=2; number<=n; number++)//2���� n���� ����
	{
		for(divisor=2;number%divisor;divisor++);//number�� �ٸ� ���� ��������������� ����

		if(number==divisor)//��������� ���� �ڱ� �ڽ��̶�� �Ҽ��̴�.
		{
			printf("%5d", number);//�Ҽ� ���
			
			if(++count%10==0)//�Ҽ� 10���� ���� �ٷ� �̵�
			{
				printf("\n");
			}
		}
	}
}

void triangle(int n)//� �ڿ��� n�� �Է� �޾� 0���� �� �������� ���� �ﰢ���� ����� ����ϴ� �Լ��� �ۼ��Ͻÿ�.
{
	int i, j;

	for(i=0; i<=n; i++)
	{
		for(j=n; j>i; j--)//���� ������ �Է�
		printf(" ");
		
		for(j=i; j>=0; j--)//0������ ���� �Է�
			printf("%d", j);
		
		for(j=1; j<=i; j++)//1������ ���� �Է�
			printf("%d", j);

		printf("\n");//�����ٷ� �ѱ�
	}
}