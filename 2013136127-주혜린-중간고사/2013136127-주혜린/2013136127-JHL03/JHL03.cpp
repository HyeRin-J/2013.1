#include <stdio.h>

void JHL01(int n);

void JHLInfo()//���� ���
{
	printf("+=============================================================+\n");
	printf("|C ���α׷��� �߰���� 3�� ����                               |\n");
	printf("|��¥ : 2013�� 5�� 3��                                        |\n");
	printf("|�й� : 2013136127                                            |\n");
	printf("|�̸� : ������(JHL)                                           |\n");
	printf("+=============================================================+\n");
	printf("|���� : ���� ���ϱ�                                           |\n");
	printf("+-------------------------------------------------------------+\n");
}

int main ()
{
	int n;

	JHLInfo();
	printf("���� ����� ���� = ");
	scanf("%d", &n);

	printf("�ݺ������� ����\n");
	JHL01(n);


	getchar();
	getchar();
	return 0;
}

void JHL01(int n)
{
	int p2=2;
	int p1=1;
	int p0=0;
	int result;

	int i;

	for(i=3; i<=n; i++)
	{
		result=p0+p1+p2;
		p2=p1;
		p1=p0;
		p0=p2;

		printf("[%3d][%40d]\n", i, result);
	}
}