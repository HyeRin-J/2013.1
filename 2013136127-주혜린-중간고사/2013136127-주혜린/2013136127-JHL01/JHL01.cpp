#include <stdio.h>

void JHLGuguDan(int columns);

void JHLInfo()//���� ���
{
	printf("+=============================================================+\n");
	printf("|C ���α׷��� �߰���� 1�� ����                               |\n");
	printf("|��¥ : 2013�� 5�� 3��                                        |\n");
	printf("|�й� : 2013136127                                            |\n");
	printf("|�̸� : ������(JHL)                                           |\n");
	printf("+=============================================================+\n");
	printf("|���� : ������ ���� ���� ����ϱ�                             |\n");
	printf("+-------------------------------------------------------------+\n");
	printf("|�� �ٿ� ����� ������ ���� ���� �Է� �޾�                    |\n");
	printf("|2�ܺ��� 9�ܱ����� �������� ���� ���� �����                  |\n");
	printf("+-------------------------------------------------------------+\n");
}
int main ()
{
	int i;
	int num;//����� ���� ������ �Է��ϱ� ���� ����

	JHLInfo();

	printf("�� �ٿ� ����� ���� ���� =");
	scanf("%d", &num);//�� �ٿ� ����� ���� ���� �Է�

	JHLGuguDan(num);

	getchar();
	getchar();
	return 0;
}

void JHLGuguDan(int columns)
{
	int i;
	int count=1;

	for(i=2; i<=9; i++){//2�ܺ��� 9�ܱ��� ���
		count++;
		printf("%d X 1 = %3d%c", i, 1*i, (count % columns) ? ' ' : '\n');
		printf("%d X 2 = %3d%c", i, 2*i, (count % columns) ? ' ' : '\n');
		printf("%d X 3 = %3d%c", i, 3*i, (count % columns) ? ' ' : '\n');
		printf("%d X 4 = %3d%c", i, 4*i, (count % columns) ? ' ' : '\n');
		printf("%d X 5 = %3d%c", i, 5*i, (count % columns) ? ' ' : '\n');
		printf("%d X 6 = %3d%c", i, 6*i, (count % columns) ? ' ' : '\n');
		printf("%d X 7 = %3d%c", i, 7*i, (count % columns) ? ' ' : '\n');
		printf("%d X 8 = %3d%c", i, 8*i, (count % columns) ? ' ' : '\n');
		printf("%d X 9 = %3d%c", i, 9*i, (count % columns) ? ' ' : '\n');
	}
}