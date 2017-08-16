#include <stdio.h>

void Menu();

void JHLInfo()//���� ���
{
	printf("****************************************\n");
	printf("*C ���α׷��� �⸻��� 1�� ����\n");
	printf("*	��¥ : 2013�� 6�� 12��\n");
	printf("*	�й� : 2013136127\n");
	printf("*	�̸� : ������(JHL)\n");
	printf("*\n");
	printf("|	���� : 1) �߰���� ���� �ٽ� ����\n");
	printf("*****************************************\n");
}

int factorial(int n);
int permutation(int n, int c);
int combination(int n, int c);

int main ()
{
	char i;
	int n, c;

	JHLInfo();

	Menu();

	while(1){
		scanf("%s", &i);

		switch(i){
		case 'f'://f�� ���
			printf("n=");
			scanf("%d", &n);

			printf("Factorial<%d>=%d", n, factorial(n));

			break;
		case 'c'://c�� ���
			printf("n c =");
			scanf("%d %d", &n, &c);

			printf("Combination<%d, %d>=%d\n", n, c, combination(n, c));
			break;
		case 'p'://p�� ���
			printf("n c =");
			scanf("%d %d", &n, &c);

			printf("Permutation<%d, %d>=%d\n", n, c, permutation(n, c));
			break;
		case 'q'://q�� ���
			printf("���α׷��� �����մϴ�\n");
			break;
		default://������
			printf("�Է��� �߸��Ǿ����ϴ�.\n");
			break;
		}
		if(i=='q') break;//q�� ��� ���α׷� ����
	}

	getchar();
	getchar();
	return 0;
}

void Menu()
{
	printf("'f'actorial / 'c'ombination / 'p'ermutation / 'q'uit\n");
}


int factorial(int n)// n�� factorial ���� ����
{
	if(n<=1) return 1;
	else return (n*factorial(n-1));
}

int permutation(int n, int c)// n! / (n-r)! ���� ����
{
	return factorial(n) / factorial(n - c);
}

int combination(int n, int c)// ������ ���� r! �� ���� ���� ���� ����
{
	return permutation(n, c) / factorial(c);
}
